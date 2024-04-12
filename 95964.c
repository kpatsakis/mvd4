static CVE_2015_3813_PATCHED_fragment_add_work(fragment_head *fd_head, tvbuff_t *tvb, const int const packet_info *pinfo, const guint32 const guint32 frag_data_len, const gboolean more_frags) fragment_item * fd ; fragment_item * fd_i ; guint32 max , dfpos , fraglen ; guint8 * data ; fd = g_slice_new ( fragment_item ); fd -> next = NULL; fd -> flags = 0; fd -> frame = pinfo -> fd -> num; fd -> offset = frag_offset; fd -> fragment_nr_offset = 0; fd -> len = frag_data_len; fd -> tvb_data = NULL; fd -> error = NULL; if ( fd_head -> flags & FD_DEFRAGMENTED )  if ( frag_offset + frag_data_len >= fd_head -> datalen )  if ( fd_head -> flags & FD_PARTIAL_REASSEMBLY )  for(fd_i=fd_head->next; fd_i; fd_i=fd_i->next) if ( ! fd_i -> tvb_data )  fd_i -> tvb_data = tvb_new_subset_remaining ( fd_head -> tvb_data , fd_i -> offset ); fd_i -> flags |= FD_SUBSET_TVB; fd_i -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> flags &= ~ ( FD_DEFRAGMENTED | FD_PARTIAL_REASSEMBLY | FD_DATALEN_SET ); fd_head -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> datalen = 0; fd_head -> reassembled_in = 0; if ( fd -> frame > fd_head -> frame )  fd_head -> frame = fd -> frame; if ( ! more_frags )  if ( fd_head -> flags & FD_DATALEN_SET )  if ( fd_head -> datalen != ( fd -> offset + fd -> len ) )  fd_head -> flags |= FD_MULTIPLETAILS; fd_head -> datalen = fd -> offset + fd -> len; fd_head -> flags |= FD_DATALEN_SET; if ( fd_head -> flags & FD_DEFRAGMENTED )  if ( ! ( fd_head -> flags & FD_DATALEN_SET ) )  max = 0; for (fd_i=fd_head->next;fd_i;fd_i=fd_i->next) if ( ( ( fd_i -> offset ) <= max ) && ( ( fd_i -> offset + fd_i -> len ) > max ) )  max = fd_i -> offset + fd_i -> len; if ( max < ( fd_head -> datalen ) )  data = ( guint8 * ) g_malloc ( fd_head -> datalen ); fd_head -> tvb_data = tvb_new_real_data ( data , fd_head -> datalen , fd_head -> datalen ); for (dfpos=0,fd_i=fd_head;fd_i;fd_i=fd_i->next) if ( fd_i -> len )  if ( fd_i -> offset + fd_i -> len > dfpos )  if ( fd_i -> offset >= fd_head -> datalen )  fd_i -> flags |= FD_TOOLONGFRAGMENT; fd_head -> flags |= FD_TOOLONGFRAGMENT; if ( dfpos < fd_i -> offset )  fd_head -> error = "dfpos < offset"; if ( dfpos - fd_i -> offset > fd_i -> len )  fd_head -> error = "dfpos - offset > len"; if ( ! fd_head -> tvb_data )  fd_head -> error = "no data"; fraglen = fd_i -> len; if ( fd_i -> offset + fraglen > fd_head -> datalen )  fd_i -> flags |= FD_TOOLONGFRAGMENT; fd_head -> flags |= FD_TOOLONGFRAGMENT; fraglen = fd_head -> datalen - fd_i -> offset; if ( fd_i -> offset < dfpos )  guint32 cmp_len = MIN ( fd_i -> len , ( dfpos - fd_i -> offset ) ) ; fd_i -> flags |= FD_OVERLAP; fd_head -> flags |= FD_OVERLAP; if ( memcmp ( data + fd_i -> offset , tvb_get_ptr ( fd_i -> tvb_data , 0 , cmp_len ) , cmp_len ) )  fd_i -> flags |= FD_OVERLAPCONFLICT; fd_head -> flags |= FD_OVERLAPCONFLICT; if ( fraglen < dfpos - fd_i -> offset )  fd_head -> error = "fraglen < dfpos - offset"; dfpos = MAX ( dfpos , ( fd_i -> offset + fraglen ) ); if ( fd_i -> offset + fd_i -> len < fd_i -> offset )  fd_head -> error = "offset + len < offset"; if ( fd_i -> flags & FD_SUBSET_TVB )  fd_i -> flags &= ~FD_SUBSET_TVB; fd_i -> tvb_data = NULL; 