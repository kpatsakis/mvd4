static CVE_2007_6151_VULN_isdn_ioctl(struct inode *inode, struct file *file, uint cmd, ulong arg) uint minor = iminor ( inode ) ; void __user * argp = ( void __user * ) arg ; if ( minor == ISDN_MINOR_STATUS )  if ( ! dev -> drivers )  if ( minor <= ISDN_MINOR_BMAX )  if ( minor <= ISDN_MINOR_CTRLMAX )  switch ( cmd )  if ( ( cmd & IIOCDRVCTL ) == IIOCDRVCTL )  if ( arg )  if ( copy_from_user ( & iocts , argp , sizeof ( isdn_ioctl_struct ) ) )  if ( strlen ( iocts . drvid ) )  