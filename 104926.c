static sg_read(struct file *filp, char __user *buf, size_t count, loff_t * ppos) Sg_device * sdp ; Sg_fd * sfp ; Sg_request * srp ; int req_pack_id = - 1 ; sg_io_hdr_t * hp ; struct sg_header * old_hdr = NULL ; if ( ( ! ( sfp = ( Sg_fd * ) filp -> private_data ) ) || ( ! ( sdp = sfp -> parentdp ) ) )  if ( ! access_ok ( VERIFY_WRITE , buf , count ) )  if ( sfp -> force_packid && ( count >= SZ_SG_HEADER ) )  old_hdr = kmalloc ( SZ_SG_HEADER , GFP_KERNEL ); if ( ! old_hdr )  if ( __copy_from_user ( old_hdr , buf , SZ_SG_HEADER ) )  if ( old_hdr -> reply_len < 0 )  if ( count >= SZ_SG_IO_HDR )  sg_io_hdr_t * new_hdr ; new_hdr = kmalloc ( SZ_SG_IO_HDR , GFP_KERNEL ); if ( ! new_hdr )  retval = __copy_from_user ( new_hdr , buf , SZ_SG_IO_HDR ); req_pack_id = new_hdr -> pack_id; if ( retval )  req_pack_id = old_hdr -> pack_id; srp = sg_get_rq_mark ( sfp , req_pack_id ); static Sg_request sg_get_rq_mark(Sg_fd * sfp, int pack_id) Sg_request * resp ; for (resp = sfp->headrp; resp; resp = resp->nextrp) if ( ( 1 == resp -> done ) && ( ! resp -> sg_io_owned ) && ( ( - 1 == pack_id ) || ( resp -> header . pack_id == pack_id ) ) )  return resp ; if ( ! srp )  if ( atomic_read ( & sdp -> detaching ) )  if ( filp -> f_flags & O_NONBLOCK )  retval = wait_event_interruptible ( sfp -> read_wait , ( atomic_read ( & sdp -> detaching ) || ( srp = sg_get_rq_mark ( sfp , req_pack_id ) ) ) ); static Sg_request sg_get_rq_mark(Sg_fd * sfp, int pack_id) Sg_request * resp ; if ( ( 1 == resp -> done ) && ( ! resp -> sg_io_owned ) && ( ( - 1 == pack_id ) || ( resp -> header . pack_id == pack_id ) ) )  return resp ; if ( atomic_read ( & sdp -> detaching ) )  if ( retval )  if ( srp -> header . interface_id != '\0' )  hp = & srp -> header; if ( old_hdr == NULL )  old_hdr = kmalloc ( SZ_SG_HEADER , GFP_KERNEL ); if ( ! old_hdr )  memset ( old_hdr , 0 , SZ_SG_HEADER ); old_hdr -> reply_len = ( int ) hp -> timeout; old_hdr -> pack_len = old_hdr -> reply_len; old_hdr -> pack_id = hp -> pack_id; old_hdr -> twelve_byte = ( ( srp -> data . cmd_opcode >= 0xc0 ) && ( 12 == hp -> cmd_len ) ) ? 1 : 0; old_hdr -> target_status = hp -> masked_status; old_hdr -> host_status = hp -> host_status; old_hdr -> driver_status = hp -> driver_status; if ( ( CHECK_CONDITION & hp -> masked_status ) || ( DRIVER_SENSE & hp -> driver_status ) )  memcpy ( old_hdr -> sense_buffer , srp -> sense_b , sizeof ( old_hdr -> sense_buffer ) ); switch ( hp -> host_status )  old_hdr -> result = 0; old_hdr -> result = EBUSY; old_hdr -> result = EIO; old_hdr -> result = ( srp -> sense_b [ 0 ] == 0 && hp -> masked_status == GOOD ) ? 0 : EIO; old_hdr -> result = EIO; if ( count >= SZ_SG_HEADER )  if ( __copy_to_user ( buf , old_hdr , SZ_SG_HEADER ) )  buf += SZ_SG_HEADER; if ( count > old_hdr -> reply_len )  count = old_hdr -> reply_len; if ( count > SZ_SG_HEADER )  if ( sg_read_oxfer ( srp , buf , count - SZ_SG_HEADER ) )  static sg_read_oxfer(Sg_request * srp, char __user *outp, int num_read_xfer) Sg_scatter_hold * schp = & srp -> data ; int k , num ; if ( ( ! outp ) || ( num_read_xfer <= 0 ) )  return 0 ; num = 1 << ( PAGE_SHIFT + schp -> page_order ); for (k = 0; k < schp->k_use_sg && schp->pages[k]; k++) if ( num > num_read_xfer )  if ( __copy_to_user ( outp , page_address ( schp -> pages [ k ] ) , num_read_xfer ) )  return - EFAULT ; if ( __copy_to_user ( outp , page_address ( schp -> pages [ k ] ) , num ) )  return - EFAULT ; num_read_xfer -= num; if ( num_read_xfer <= 0 )  outp += num; return 0 ; sg_finish_rem_req ( srp ); static sg_finish_rem_req(Sg_request *srp) Sg_fd * sfp = srp -> parentfp ; Sg_scatter_hold * req_schp = & srp -> data ; if ( srp -> res_used )  sg_remove_scat ( sfp , req_schp ); static sg_remove_scat(Sg_fd * sfp, Sg_scatter_hold * schp) memset ( schp , 0 , sizeof ( * schp ) ); 