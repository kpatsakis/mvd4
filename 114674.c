static CVE_2007_6151_PATCHED_isdn_ioctl(struct inode *inode, struct file *file, uint cmd, ulong arg) uint minor = iminor ( inode ) ; void __user * argp = ( void __user * ) arg ; if ( minor == ISDN_MINOR_STATUS )  if ( ! dev -> drivers )  if ( minor <= ISDN_MINOR_BMAX )  if ( minor <= ISDN_MINOR_CTRLMAX )  switch ( cmd )  if ( arg )  if ( copy_from_user ( & iocts , argp , sizeof ( isdn_ioctl_struct ) ) )  iocts . drvid [ sizeof ( iocts . drvid ) - 1 ] = 0; if ( strlen ( iocts . drvid ) )  