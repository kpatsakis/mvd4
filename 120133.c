static void v9fs_xattrwalk(void *opaque) size_t offset = 7 ; int32_t fid , newfid ; V9fsFidState * file_fidp ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; err = pdu_unmarshal ( pdu , offset , "dds" , & fid , & newfid , & name ); if ( err < 0 )  file_fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( file_fidp == NULL )  xattr_fidp = alloc_fid ( s , newfid ); static V9fsFidState *alloc_fid(V9fsState *s, int32_t fid) V9fsFidState * f ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  return NULL ; f = g_malloc0 ( sizeof ( V9fsFidState ) ); f -> fid = fid; f -> fid_type = P9_FID_NONE; f -> ref = 1; f -> flags |= FID_REFERENCED; f -> next = s -> fid_list; return f ; if ( xattr_fidp == NULL )  v9fs_path_copy ( & xattr_fidp -> path , & file_fidp -> path ); void v9fs_path_copy(V9fsPath *lhs, V9fsPath *rhs) lhs -> data = g_malloc ( rhs -> size ); memcpy ( lhs -> data , rhs -> data , rhs -> size ); lhs -> size = rhs -> size; 