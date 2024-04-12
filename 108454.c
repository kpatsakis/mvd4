      attrlist_cursor_kern_t *cursor) xfs_attr_list_context_t context ; if ( cursor -> pad1 || cursor -> pad2 )  if ( ( cursor -> initted == 0 ) && ( cursor -> hashval || cursor -> blkno || cursor -> offset ) )  if ( ( ( long ) buffer ) & ( sizeof ( int ) - 1 ) )  memset ( & context , 0 , sizeof ( context ) ); context . dp = dp; context . cursor = cursor; context . resynch = 1; context . flags = flags; context . alist = buffer; context . bufsize = ( bufsize & ~ ( sizeof ( int ) - 1 ) ); context . firstu = context . bufsize; context . put_listent = xfs_attr_put_listent; alist = ( struct attrlist * ) context . alist; alist -> al_count = 0; alist -> al_more = 0; alist -> al_offset [ 0 ] = context . bufsize; error = xfs_attr_list_int ( & context );   xfs_attr_list_context_t *context) xfs_inode_t * dp = context -> dp ; if ( XFS_FORCED_SHUTDOWN ( dp -> i_mount ) )  lock_mode = xfs_ilock_attr_map_shared ( dp ); if ( ! xfs_inode_hasattr ( dp ) )  if ( dp -> i_d . di_aformat == XFS_DINODE_FMT_LOCAL )  error = xfs_attr_shortform_list ( context );  xfs_attr_shortform_list(xfs_attr_list_context_t *context) ASSERT ( context != NULL ); dp = context -> dp; ASSERT ( dp != NULL ); ASSERT ( dp -> i_afp != NULL ); sf = ( xfs_attr_shortform_t * ) dp -> i_afp -> if_u1 . if_data; ASSERT ( sf != NULL ); if ( ! sf -> hdr . count )  cursor = context -> cursor; ASSERT ( cursor != NULL ); trace_xfs_attr_list_sf ( context ); if ( context -> bufsize == 0 || ( XFS_ISRESET_CURSOR ( cursor ) && ( dp -> i_afp -> if_bytes + sf -> hdr . count * 16 ) < context -> bufsize ) )  for (i = 0, sfe = &sf->list[0]; i < sf->hdr.count; i++) error = context -> put_listent ( context , sfe -> flags , sfe -> nameval , ( int ) sfe -> namelen , ( int ) sfe -> valuelen , & sfe -> nameval [ sfe -> namelen ] ); if ( context -> seen_enough )  if ( error )  return error ; sfe = XFS_ATTR_SF_NEXTENTRY ( sfe ); trace_xfs_attr_list_sf_all ( context ); if ( context -> bufsize == 0 )  sbsize = sf -> hdr . count * sizeof ( * sbuf ); sbp = sbuf = kmem_alloc ( sbsize , KM_SLEEP | KM_NOFS ); for (i = 0, sfe = &sf->list[0]; i < sf->hdr.count; i++) if ( unlikely ( ( ( char * ) sfe < ( char * ) sf ) || ( ( char * ) sfe >= ( ( char * ) sf + dp -> i_afp -> if_bytes ) ) ) )  XFS_CORRUPTION_ERROR ( "xfs_attr_shortform_list" , XFS_ERRLEVEL_LOW , context -> dp -> i_mount , sfe ); kmem_free ( sbuf ); sbp -> entno = i; sbp -> hash = xfs_da_hashname ( sfe -> nameval , sfe -> namelen ); sbp -> name = sfe -> nameval; sbp -> namelen = sfe -> namelen; sbp -> valuelen = sfe -> valuelen; sbp -> flags = sfe -> flags; sfe = XFS_ATTR_SF_NEXTENTRY ( sfe ); sbp ++; xfs_sort ( sbuf , nsbuf , sizeof ( * sbuf ) , xfs_attr_shortform_compare ); cursor -> initted = 1; cursor -> blkno = 0; for (sbp = sbuf, i = 0; i < nsbuf; i++, sbp++) if ( sbp -> hash == cursor -> hashval )  if ( cursor -> offset == count )  if ( sbp -> hash > cursor -> hashval )  if ( i == nsbuf )  kmem_free ( sbuf ); for ( ; i < nsbuf; i++, sbp++) if ( cursor -> hashval != sbp -> hash )  cursor -> hashval = sbp -> hash; cursor -> offset = 0; error = context -> put_listent ( context , sbp -> flags , sbp -> name , sbp -> namelen , sbp -> valuelen , & sbp -> name [ sbp -> namelen ] ); if ( error )  return error ; if ( context -> seen_enough )  cursor -> offset ++; kmem_free ( sbuf ); if ( xfs_bmap_one_block ( dp , XFS_ATTR_FORK ) )  error = xfs_attr_leaf_list ( context ); STATIC xfs_attr_leaf_list(xfs_attr_list_context_t *context) trace_xfs_attr_leaf_list ( context ); context -> cursor -> blkno = 0; error = xfs_attr3_leaf_read ( NULL , context -> dp , 0 , - 1 , & bp ); if ( error )  return error ; error = xfs_attr3_leaf_list_int ( bp , context );   struct struct xfs_attr_list_context	*context) struct xfs_mount * mp = context -> dp -> i_mount ; trace_xfs_attr_list_leaf ( context ); leaf = bp -> b_addr; xfs_attr3_leaf_hdr_from_disk ( mp -> m_attr_geo , & ichdr , leaf ); entries = xfs_attr3_leaf_entryp ( leaf ); cursor = context -> cursor; cursor -> initted = 1; if ( context -> resynch )  entry = & entries [ 0 ]; for (i = 0; i < ichdr.count; entry++, i++) if ( be32_to_cpu ( entry -> hashval ) == cursor -> hashval )  if ( cursor -> offset == context -> dupcnt )  context -> dupcnt = 0; context -> dupcnt ++; if ( be32_to_cpu ( entry -> hashval ) > cursor -> hashval )  context -> dupcnt = 0; if ( i == ichdr . count )  trace_xfs_attr_list_notfound ( context ); entry = & entries [ 0 ]; context -> resynch = 0; for (; i < ichdr.count; entry++, i++) if ( be32_to_cpu ( entry -> hashval ) != cursor -> hashval )  cursor -> hashval = be32_to_cpu ( entry -> hashval ); cursor -> offset = 0; if ( entry -> flags & XFS_ATTR_INCOMPLETE )  if ( entry -> flags & XFS_ATTR_LOCAL )  xfs_attr_leaf_name_local_t * name_loc = xfs_attr3_leaf_name_local ( leaf , i ) ; retval = context -> put_listent ( context , entry -> flags , name_loc -> nameval , ( int ) name_loc -> namelen , be16_to_cpu ( name_loc -> valuelen ) , & name_loc -> nameval [ name_loc -> namelen ] ); if ( retval )  return retval ; xfs_attr_leaf_name_remote_t * name_rmt = xfs_attr3_leaf_name_remote ( leaf , i ) ; int valuelen = be32_to_cpu ( name_rmt -> valuelen ) ; if ( context -> put_value )  args . geo = context -> dp -> i_mount -> m_attr_geo; args . dp = context -> dp; args . whichfork = XFS_ATTR_FORK; args . valuelen = valuelen; args . rmtvaluelen = valuelen; args . value = kmem_alloc ( valuelen , KM_SLEEP | KM_NOFS ); args . rmtblkno = be32_to_cpu ( name_rmt -> valueblk ); args . rmtblkcnt = xfs_attr3_rmt_blocks ( args . dp -> i_mount , valuelen ); retval = xfs_attr_rmtval_get ( & args ); if ( retval )  return retval ; retval = context -> put_listent ( context , entry -> flags , name_rmt -> name , ( int ) name_rmt -> namelen , valuelen , args . value ); kmem_free ( args . value ); retval = context -> put_listent ( context , entry -> flags , name_rmt -> name , ( int ) name_rmt -> namelen , valuelen , NULL ); if ( retval )  return retval ; if ( context -> seen_enough )  cursor -> offset ++; trace_xfs_attr_list_leaf_end ( context ); return retval ; return error ; error = xfs_attr_node_list ( context ); STATIC xfs_attr_node_list(xfs_attr_list_context_t *context) struct xfs_inode * dp = context -> dp ; struct xfs_mount * mp = dp -> i_mount ; trace_xfs_attr_node_list ( context ); cursor = context -> cursor; cursor -> initted = 1; if ( cursor -> blkno > 0 )  error = xfs_da3_node_read ( NULL , dp , cursor -> blkno , - 1 , & bp , XFS_ATTR_FORK ); if ( ( error != 0 ) && ( error != - EFSCORRUPTED ) )  return error ; trace_xfs_attr_list_wrong_blk ( context ); xfs_attr3_leaf_hdr_from_disk ( mp -> m_attr_geo , & leafhdr , leaf ); if ( cursor -> hashval > be32_to_cpu ( entries [ leafhdr . count - 1 ] . hashval ) )  trace_xfs_attr_list_wrong_blk ( context ); if ( cursor -> hashval <= be32_to_cpu ( entries [ 0 ] . hashval ) )  trace_xfs_attr_list_wrong_blk ( context ); trace_xfs_attr_list_wrong_blk ( context ); cursor -> blkno = 0; error = xfs_da3_node_read ( NULL , dp , cursor -> blkno , - 1 , & bp , XFS_ATTR_FORK ); if ( error )  return error ; XFS_CORRUPTION_ERROR ( "xfs_attr_node_list(3)" , XFS_ERRLEVEL_LOW , context -> dp -> i_mount , node ); dp -> d_ops -> node_hdr_from_disk ( & nodehdr , node ); btree = dp -> d_ops -> node_tree_p ( node ); for (i = 0; i < nodehdr.count; btree++, i++) if ( cursor -> hashval <= be32_to_cpu ( btree -> hashval ) )  cursor -> blkno = be32_to_cpu ( btree -> before ); trace_xfs_attr_list_node_descend ( context , btree ); if ( i == nodehdr . count )  error = xfs_attr3_leaf_list_int ( bp , context );   struct struct xfs_attr_list_context	*context) struct xfs_mount * mp = context -> dp -> i_mount ; trace_xfs_attr_list_leaf ( context ); leaf = bp -> b_addr; xfs_attr3_leaf_hdr_from_disk ( mp -> m_attr_geo , & ichdr , leaf ); entries = xfs_attr3_leaf_entryp ( leaf ); cursor = context -> cursor; cursor -> initted = 1; if ( context -> resynch )  entry = & entries [ 0 ]; if ( be32_to_cpu ( entry -> hashval ) == cursor -> hashval )  if ( cursor -> offset == context -> dupcnt )  context -> dupcnt = 0; context -> dupcnt ++; if ( be32_to_cpu ( entry -> hashval ) > cursor -> hashval )  context -> dupcnt = 0; if ( i == ichdr . count )  trace_xfs_attr_list_notfound ( context ); entry = & entries [ 0 ]; context -> resynch = 0; if ( be32_to_cpu ( entry -> hashval ) != cursor -> hashval )  cursor -> hashval = be32_to_cpu ( entry -> hashval ); cursor -> offset = 0; if ( entry -> flags & XFS_ATTR_INCOMPLETE )  if ( entry -> flags & XFS_ATTR_LOCAL )  xfs_attr_leaf_name_local_t * name_loc = xfs_attr3_leaf_name_local ( leaf , i ) ; retval = context -> put_listent ( context , entry -> flags , name_loc -> nameval , ( int ) name_loc -> namelen , be16_to_cpu ( name_loc -> valuelen ) , & name_loc -> nameval [ name_loc -> namelen ] ); if ( retval )  return retval ; xfs_attr_leaf_name_remote_t * name_rmt = xfs_attr3_leaf_name_remote ( leaf , i ) ; int valuelen = be32_to_cpu ( name_rmt -> valuelen ) ; if ( context -> put_value )  args . geo = context -> dp -> i_mount -> m_attr_geo; args . dp = context -> dp; args . whichfork = XFS_ATTR_FORK; args . valuelen = valuelen; args . rmtvaluelen = valuelen; args . value = kmem_alloc ( valuelen , KM_SLEEP | KM_NOFS ); args . rmtblkno = be32_to_cpu ( name_rmt -> valueblk ); args . rmtblkcnt = xfs_attr3_rmt_blocks ( args . dp -> i_mount , valuelen ); retval = xfs_attr_rmtval_get ( & args ); if ( retval )  return retval ; retval = context -> put_listent ( context , entry -> flags , name_rmt -> name , ( int ) name_rmt -> namelen , valuelen , args . value ); kmem_free ( args . value ); retval = context -> put_listent ( context , entry -> flags , name_rmt -> name , ( int ) name_rmt -> namelen , valuelen , NULL ); if ( retval )  return retval ; if ( context -> seen_enough )  cursor -> offset ++; trace_xfs_attr_list_leaf_end ( context ); return retval ; if ( error )  return error ; xfs_attr3_leaf_hdr_from_disk ( mp -> m_attr_geo , & leafhdr , leaf ); if ( context -> seen_enough || leafhdr . forw == 0 )  cursor -> blkno = leafhdr . forw; error = xfs_attr3_leaf_read ( NULL , dp , cursor -> blkno , - 1 , & bp ); if ( error )  return error ; xfs_iunlock ( dp , lock_mode ); return error ; ASSERT ( error <= 0 ); return error ; 