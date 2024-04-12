static void v9fs_rename(void *opaque) int32_t fid ; size_t offset = 7 ; int32_t newdirfid ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "dds" , & fid , & newdirfid , & name ); if ( err < 0 )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( fidp == NULL )  if ( ! ( pdu -> s -> ctx . export_flags & V9FS_PATHNAME_FSCONTEXT ) )  err = v9fs_complete_rename ( pdu , fidp , newdirfid , & name ); static int v9fs_complete_rename(V9fsPDU *pdu, V9fsFidState int32_t newdirfid, V9fsString *name) V9fsPath new_path ; V9fsFidState * tfidp ; V9fsState * s = pdu -> s ; if ( newdirfid != - 1 )  dirfidp = get_fid ( pdu , newdirfid ); if ( dirfidp == NULL )  err = v9fs_co_rename ( pdu , & fidp -> path , & new_path ); if ( err < 0 )  for (tfidp = s->fid_list; tfidp; tfidp = tfidp->next) if ( v9fs_path_is_ancestor ( & fidp -> path , & tfidp -> path ) )  v9fs_fix_path ( & tfidp -> path , & new_path , strlen ( fidp -> path . data ) ); static void v9fs_fix_path(V9fsPath *dst, V9fsPath *src, int len) V9fsPath str ; v9fs_path_copy ( & str , dst ); void v9fs_path_copy(V9fsPath *lhs, V9fsPath *rhs) lhs -> data = g_malloc ( rhs -> size ); memcpy ( lhs -> data , rhs -> data , rhs -> size ); lhs -> size = rhs -> size; 