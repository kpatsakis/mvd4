static void v9fs_clunk(void *opaque) int err ; int32_t fid ; size_t offset = 7 ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; err = pdu_unmarshal ( pdu , offset , "d" , & fid ); if ( err < 0 )  fidp = clunk_fid ( s , fid ); static V9fsFidState *clunk_fid(V9fsState *s, int32_t fid) V9fsFidState * * fidpp , * fidp ; for (fidpp = &s->fid_list; *fidpp; fidpp = &(*fidpp)->next) if ( ( * fidpp ) -> fid == fid )  if ( * fidpp == NULL )  return NULL ; fidp = * fidpp; fidp -> clunked = 1; return fidp ; if ( fidp == NULL )  err = - ENOENT; fidp -> ref ++; err = put_fid ( pdu , fidp ); static int put_fid(V9fsPDU *pdu, V9fsFidState *fidp) fidp -> ref --; if ( ! fidp -> ref && fidp -> clunked )  return free_fid ( pdu , fidp ) ; static int free_fid(V9fsPDU *pdu, V9fsFidState *fidp) int retval = 0 ; if ( fidp -> fid_type == P9_FID_FILE )  if ( fidp -> fs . fd != - 1 )  retval = v9fs_co_close ( pdu , & fidp -> fs ); if ( fidp -> fid_type == P9_FID_DIR )  if ( fidp -> fs . dir != NULL )  retval = v9fs_co_closedir ( pdu , & fidp -> fs ); if ( fidp -> fid_type == P9_FID_XATTR )  retval = v9fs_xattr_fid_clunk ( pdu , fidp ); static int v9fs_xattr_fid_clunk(V9fsPDU *pdu, V9fsFidState *fidp) int retval = 0 ; if ( fidp -> fs . xattr . copied_len == - 1 )  if ( fidp -> fs . xattr . len != fidp -> fs . xattr . copied_len )  retval = - EINVAL; if ( fidp -> fs . xattr . len )  retval = v9fs_co_lsetxattr ( pdu , & fidp -> path , & fidp -> fs . xattr . name , fidp -> fs . xattr . value , fidp -> fs . xattr . len , fidp -> fs . xattr . flags ); retval = v9fs_co_lremovexattr ( pdu , & fidp -> path , & fidp -> fs . xattr . name ); return retval ; return retval ; return 0 ; if ( ! err )  err = offset; complete_pdu ( s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); static void free_pdu(V9fsState *s, V9fsPDU *pdu) if ( pdu )  if ( ! pdu -> cancelled )  QLIST_REMOVE ( pdu , next ); QLIST_INSERT_HEAD ( & s -> free_list , pdu , next ); 