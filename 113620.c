int CVE_2012_2652_VULN_bdrv_open(BlockDriverState *bs, const char *filename, int BlockDriver *drv) int ret ; char tmp_filename [ PATH_MAX ] ; if ( flags & BDRV_O_SNAPSHOT )  BlockDriverState * bs1 ; int is_protocol = 0 ; BlockDriver * bdrv_qcow2 ; QEMUOptionParameter * options ; char backing_filename [ PATH_MAX ] ; bs1 = bdrv_new ( "" ); ret = CVE_2012_2652_VULN_bdrv_open ( bs1 , filename , 0 , drv ); if ( ret < 0 )  if ( bs1 -> drv && bs1 -> drv -> protocol_name )  is_protocol = 1; if ( is_protocol )  snprintf ( backing_filename , sizeof ( backing_filename ) , "%s" , filename ); if ( ! realpath ( filename , backing_filename ) )  bdrv_qcow2 = bdrv_find_format ( "qcow2" ); options = parse_option_parameters ( "" , bdrv_qcow2 -> create_options , NULL ); ret = bdrv_create ( bdrv_qcow2 , tmp_filename , options ); if ( ret < 0 )  filename = tmp_filename; drv = bdrv_qcow2; bs -> is_temporary = 1; if ( ! drv )  ret = find_image_format ( filename , & drv ); if ( ! drv )  ret = bdrv_open_common ( bs , filename , flags , drv ); if ( ret < 0 )  if ( ( flags & BDRV_O_NO_BACKING ) == 0 && bs -> backing_file [ 0 ] != '\0' )  char backing_filename [ PATH_MAX ] ; int back_flags ; BlockDriver * back_drv = NULL ; bs -> backing_hd = bdrv_new ( "" ); if ( bs -> backing_format [ 0 ] != '\0' )  back_drv = bdrv_find_format ( bs -> backing_format ); back_flags = flags & ~ ( BDRV_O_RDWR | BDRV_O_SNAPSHOT | BDRV_O_NO_BACKING ); ret = CVE_2012_2652_VULN_bdrv_open ( bs -> backing_hd , backing_filename , back_flags , back_drv ); int CVE_2012_2652_VULN_bdrv_open(BlockDriverState *bs, const char *filename, int BlockDriver *drv) int ret ; char tmp_filename [ PATH_MAX ] ; if ( flags & BDRV_O_SNAPSHOT )  BlockDriverState * bs1 ; int is_protocol = 0 ; BlockDriver * bdrv_qcow2 ; QEMUOptionParameter * options ; char backing_filename [ PATH_MAX ] ; bs1 = bdrv_new ( "" ); ret = CVE_2012_2652_VULN_bdrv_open ( bs1 , filename , 0 , drv ); if ( ret < 0 )  if ( bs1 -> drv && bs1 -> drv -> protocol_name )  is_protocol = 1; if ( is_protocol )  snprintf ( backing_filename , sizeof ( backing_filename ) , "%s" , filename ); if ( ! realpath ( filename , backing_filename ) )  bdrv_qcow2 = bdrv_find_format ( "qcow2" ); options = parse_option_parameters ( "" , bdrv_qcow2 -> create_options , NULL ); ret = bdrv_create ( bdrv_qcow2 , tmp_filename , options ); if ( ret < 0 )  filename = tmp_filename; drv = bdrv_qcow2; bs -> is_temporary = 1; if ( ! drv )  ret = find_image_format ( filename , & drv ); if ( ! drv )  ret = bdrv_open_common ( bs , filename , flags , drv ); if ( ret < 0 )  if ( ( flags & BDRV_O_NO_BACKING ) == 0 && bs -> backing_file [ 0 ] != '\0' )  char backing_filename [ PATH_MAX ] ; int back_flags ; BlockDriver * back_drv = NULL ; bs -> backing_hd = bdrv_new ( "" ); if ( bs -> backing_format [ 0 ] != '\0' )  back_drv = bdrv_find_format ( bs -> backing_format ); back_flags = flags & ~ ( BDRV_O_RDWR | BDRV_O_SNAPSHOT | BDRV_O_NO_BACKING ); ret = CVE_2012_2652_VULN_bdrv_open ( bs -> backing_hd , backing_filename , back_flags , back_drv ); int CVE_2012_2652_VULN_bdrv_open(BlockDriverState *bs, const char *filename, int BlockDriver *drv) int ret ; if ( flags & BDRV_O_SNAPSHOT )  BlockDriverState * bs1 ; bs1 = bdrv_new ( "" ); ret = CVE_2012_2652_VULN_bdrv_open ( bs1 , filename , 0 , drv ); int CVE_2012_2652_VULN_bdrv_open(BlockDriverState *bs, const char *filename, int BlockDriver *drv) int ret ; if ( flags & BDRV_O_SNAPSHOT )  BlockDriverState * bs1 ; int is_protocol = 0 ; char backing_filename [ PATH_MAX ] ; bs1 = bdrv_new ( "" ); ret = CVE_2012_2652_VULN_bdrv_open ( bs1 , filename , 0 , drv ); if ( ret < 0 )  if ( bs1 -> drv && bs1 -> drv -> protocol_name )  is_protocol = 1; if ( is_protocol )  snprintf ( backing_filename , sizeof ( backing_filename ) , "%s" , filename ); set_option_parameter ( options , BLOCK_OPT_BACKING_FILE , backing_filename ); pstrcpy ( backing_filename , sizeof ( backing_filename ) , bs -> backing_file ); path_combine ( backing_filename , sizeof ( backing_filename ) , filename , bs -> backing_file ); ret = CVE_2012_2652_VULN_bdrv_open ( bs -> backing_hd , backing_filename , back_flags , back_drv ); if ( ret < 0 )  return ret ; 