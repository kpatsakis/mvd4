static CharDriverState *qemu_chr_open_pty(void) PtyCharDriver * s ; int slave_fd , len ; char pty_name [ PATH_MAX ] ; s = qemu_mallocz ( sizeof ( PtyCharDriver ) ); if ( openpty ( & s -> fd , & slave_fd , pty_name , NULL , NULL ) < 0 )  static int openpty(int *amaster, int *aslave, char struct termios *termp, struct winsize *winp) const char * slave ; mfd = open ( "/dev/ptmx" , O_RDWR | O_NOCTTY ); if ( mfd < 0 )  if ( grantpt ( mfd ) == - 1 || unlockpt ( mfd ) == - 1 )  if ( ( slave = ptsname ( mfd ) ) == NULL )  if ( ( sfd = open ( slave , O_RDONLY | O_NOCTTY ) ) == - 1 )  if ( ioctl ( sfd , I_PUSH , "ptem" ) == - 1 || ( termp != NULL && tcgetattr ( sfd , termp ) < 0 ) )  return 0 ; return - 1 ; close ( slave_fd ); 