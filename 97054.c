static long vhost_scsi_compat_ioctl(struct file *f, unsigned int unsigned long arg) return vhost_scsi_ioctl ( f , ioctl , ( unsigned long ) compat_ptr ( arg ) ) ; static vhost_scsi_ioctl(struct file unsigned int unsigned long arg) struct vhost_scsi * vs = f -> private_data ; struct vhost_scsi_target backend ; void __user * argp = ( void __user * ) arg ; switch ( ioctl )  if ( copy_from_user ( & backend , argp , sizeof backend ) )  if ( backend . reserved != 0 )  return vhost_scsi_set_endpoint ( vs , & backend ) ; static vhost_scsi_set_endpoint(struct vhost_scsi struct vhost_scsi_target *t) struct tcm_vhost_tport * tv_tport ; struct tcm_vhost_tpg * tpg ; struct tcm_vhost_tpg * * vs_tpg ; int index , ret , i , len ; for (index = 0; index < vs->dev.nvqs; ++index) if ( ! vhost_vq_access_ok ( & vs -> vqs [ index ] . vq ) )  len = sizeof ( vs_tpg [ 0 ] ) * VHOST_SCSI_MAX_TARGET; vs_tpg = kzalloc ( len , GFP_KERNEL ); if ( ! vs_tpg )  tv_tport = tpg -> tport; if ( ! strcmp ( tv_tport -> tport_name , t -> vhost_wwpn ) )  