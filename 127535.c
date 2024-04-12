static sg_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos) int input_size , blocking ; Sg_device * sdp ; Sg_fd * sfp ; struct sg_header old_hdr ; if ( ( ! ( sfp = ( Sg_fd * ) filp -> private_data ) ) || ( ! ( sdp = sfp -> parentdp ) ) )  if ( atomic_read ( & sdp -> detaching ) )  if ( ! ( ( filp -> f_flags & O_NONBLOCK ) || scsi_block_when_processing_errors ( sdp -> device ) ) )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  if ( count < SZ_SG_HEADER )  if ( __copy_from_user ( & old_hdr , buf , SZ_SG_HEADER ) )  blocking = ! ( filp -> f_flags & O_NONBLOCK ); if ( old_hdr . reply_len < 0 )  return sg_new_write ( sfp , filp , buf , count , blocking , 0 , 0 , NULL ) ; static sg_new_write(Sg_fd *sfp, struct file *file, const char __user size_t count, int blocking, int read_only, int Sg_request **o_srp) int k ; Sg_request * srp ; sg_io_hdr_t * hp ; unsigned char cmnd [ SG_MAX_CDB_SIZE ] ; int timeout ; unsigned long ul_timeout ; if ( count < SZ_SG_IO_HDR )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  sfp -> cmd_q = 1; if ( ! ( srp = sg_add_request ( sfp ) ) )  static Sg_request sg_add_request(Sg_fd * sfp) int k ; Sg_request * resp ; Sg_request * rp = sfp -> req_arr ; resp = sfp -> headrp; if ( ! resp )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; resp = rp; if ( 0 == sfp -> cmd_q )  resp = NULL; if ( k < SG_MAX_QUEUE )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; while ( resp -> nextrp )  resp = resp -> nextrp; resp -> nextrp = rp; resp = rp; resp = NULL; if ( resp )  resp -> nextrp = NULL; resp -> header . duration = jiffies_to_msecs ( jiffies ); return resp ; srp -> sg_io_owned = sg_io_owned; hp = & srp -> header; if ( __copy_from_user ( hp , buf , SZ_SG_IO_HDR ) )  if ( hp -> interface_id != 'S' )  if ( hp -> flags & SG_FLAG_MMAP_IO )  if ( hp -> dxfer_len > sfp -> reserve . bufflen )  if ( hp -> flags & SG_FLAG_DIRECT_IO )  if ( sg_res_in_use ( sfp ) )  static sg_res_in_use(Sg_fd * sfp) const Sg_request * srp ; for (srp = sfp->headrp; srp; srp = srp->nextrp) if ( srp -> res_used )  return srp ? 1 : 0 ; ul_timeout = msecs_to_jiffies ( srp -> header . timeout ); timeout = ( ul_timeout < INT_MAX ) ? ul_timeout : INT_MAX; if ( ( ! hp -> cmdp ) || ( hp -> cmd_len < 6 ) || ( hp -> cmd_len > sizeof ( cmnd ) ) )  if ( ! access_ok ( VERIFY_READ , hp -> cmdp , hp -> cmd_len ) )  if ( __copy_from_user ( cmnd , hp -> cmdp , hp -> cmd_len ) )  if ( read_only && sg_allow_access ( file , cmnd ) )  static int sg_allow_access(struct file *filp, unsigned char *cmd) struct sg_fd * sfp = filp -> private_data ; if ( sfp -> parentdp -> device -> type == TYPE_SCANNER )  return 0 ; return blk_verify_command ( cmd , filp -> f_mode & FMODE_WRITE ) ; k = sg_common_write ( sfp , srp , cmnd , timeout , blocking ); static sg_common_write(Sg_fd * sfp, Sg_request * unsigned char *cmnd, int timeout, int blocking) int k , at_head ; srp -> data . cmd_opcode = cmnd [ 0 ]; k = sg_start_req ( srp , cmnd ); static sg_start_req(Sg_request *srp, unsigned char *cmd) struct request * rq ; Sg_fd * sfp = srp -> parentfp ; sg_io_hdr_t * hp = & srp -> header ; struct request_queue * q = sfp -> parentdp -> device -> request_queue ; int rw = hp -> dxfer_direction == SG_DXFER_TO_DEV ? WRITE : READ ; unsigned char * long_cmdp = NULL ; if ( hp -> cmd_len > BLK_MAX_CDB )  long_cmdp = kzalloc ( hp -> cmd_len , GFP_KERNEL ); if ( ! long_cmdp )  rq = blk_get_request ( q , rw , GFP_KERNEL ); if ( IS_ERR ( rq ) )  if ( hp -> cmd_len > BLK_MAX_CDB )  rq -> cmd = long_cmdp; memcpy ( rq -> cmd , cmd , hp -> cmd_len ); rq -> cmd_len = hp -> cmd_len; srp -> rq = rq; rq -> end_io_data = srp; rq -> sense = srp -> sense_b; rq -> retries = SG_DEFAULT_RETRIES; sg_link_reserve ( sfp , srp , dxfer_len ); res = blk_rq_map_user_iov ( q , rq , md , & i , GFP_ATOMIC ); res = blk_rq_map_user ( q , rq , md , hp -> dxferp , hp -> dxfer_len , GFP_ATOMIC ); if ( ! res )  srp -> bio = rq -> bio; return res ; 