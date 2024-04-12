static void v9fs_lcreate(void *opaque) int32_t dfid , flags , mode ; gid_t gid ; ssize_t offset = 7 ; V9fsFidState * fidp ; int32_t iounit ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "dsddd" , & dfid , & name , & flags , & mode , & gid ); if ( err < 0 )  fidp = get_fid ( pdu , dfid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); static int v9fs_reopen_fid(V9fsPDU *pdu, V9fsFidState *f) int err = 1 ; if ( f -> fid_type == P9_FID_FILE )  if ( f -> fs . fd == - 1 )  err = v9fs_co_open ( pdu , f , f -> open_flags ); while ( err == - EINTR && ! pdu -> cancelled )  if ( f -> fid_type == P9_FID_DIR )  if ( f -> fs . dir == NULL )  err = v9fs_co_opendir ( pdu , f ); while ( err == - EINTR && ! pdu -> cancelled )  return err ; if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( fidp == NULL )  err = - ENOENT; flags = get_dotl_openflags ( pdu -> s , flags ); static int get_dotl_openflags(V9fsState *s, int oflags) int flags ; flags = dotl_to_open_flags ( oflags ); static int dotl_to_open_flags(int flags) int i ; int oflags = flags & O_ACCMODE ; struct dotl_openflag_map dotl_oflag_map [ ] P9_DOTL_CREATE , O_CREAT P9_DOTL_EXCL , O_EXCL P9_DOTL_NOCTTY , O_NOCTTY P9_DOTL_TRUNC , O_TRUNC P9_DOTL_APPEND , O_APPEND P9_DOTL_NONBLOCK , O_NONBLOCK P9_DOTL_DSYNC , O_DSYNC P9_DOTL_FASYNC , FASYNC P9_DOTL_DIRECT , O_DIRECT P9_DOTL_LARGEFILE , O_LARGEFILE P9_DOTL_DIRECTORY , O_DIRECTORY P9_DOTL_NOFOLLOW , O_NOFOLLOW P9_DOTL_NOATIME , O_NOATIME P9_DOTL_SYNC , O_SYNC , for (i = 0; i < ARRAY_SIZE(dotl_oflag_map); i++) if ( flags & dotl_oflag_map [ i ] . dotl_flag )  oflags |= dotl_oflag_map [ i ] . open_flag; return oflags ; flags &= ~ ( O_NOCTTY | O_ASYNC | O_CREAT ); flags &= ~O_DIRECT; return flags ; err = v9fs_co_open2 ( pdu , fidp , & name , gid , flags | O_CREAT , mode , & stbuf ); if ( err < 0 )  fidp -> fid_type = P9_FID_FILE; fidp -> open_flags = flags; if ( flags & O_EXCL )  fidp -> flags |= FID_NON_RECLAIMABLE; iounit = get_iounit ( pdu , & fidp -> path ); static int32_t get_iounit(V9fsPDU *pdu, V9fsPath *path) struct statfs stbuf ; int32_t iounit = 0 ; V9fsState * s = pdu -> s ; if ( ! v9fs_co_statfs ( pdu , path , & stbuf ) )  iounit = stbuf . f_bsize; iounit *= ( s -> msize - P9_IOHDRSZ ) / stbuf . f_bsize; if ( ! iounit )  iounit = s -> msize - P9_IOHDRSZ; return iounit ; err = pdu_marshal ( pdu , offset , "Qd" , & qid , iounit ); if ( err < 0 )  err += offset; complete_pdu ( pdu -> s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); static void free_pdu(V9fsState *s, V9fsPDU *pdu) if ( pdu )  if ( ! pdu -> cancelled )  QLIST_REMOVE ( pdu , next ); QLIST_INSERT_HEAD ( & s -> free_list , pdu , next ); 