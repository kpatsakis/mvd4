cups_file_t *				/* O - CUPS file or @code NULL@ if the file or socket cannot be opened CVE_2010_2431_VULN_cupsFileOpen(const char *filename,	/* I - Name of file const char *mode)		/* I - Open mode */ cups_file_t * fp ; int fd ; char hostname [ 1024 ] , * portname ; http_addrlist_t * addrlist ; if ( ! filename || ! mode || ( * mode != 'r' && * mode != 'w' && * mode != 'a' && * mode != 's' ) || ( * mode == 'a' && isdigit ( mode [ 1 ] & 255 ) ) )  switch ( * mode )  fd = open ( filename , O_RDWR | O_CREAT | O_APPEND | O_LARGEFILE | O_BINARY , 0666 ); fd = open ( filename , O_RDONLY | O_LARGEFILE | O_BINARY , 0 ); fd = open ( filename , O_WRONLY | O_TRUNC | O_CREAT | O_LARGEFILE | O_BINARY , 0666 ); if ( ( portname = strrchr ( hostname , ':' ) ) != NULL )  * portname ++ = '\0'; if ( ( addrlist = httpAddrGetList ( hostname , AF_UNSPEC , portname ) ) == NULL )  if ( ! httpAddrConnect ( addrlist , & fd ) )  if ( fd < 0 )  if ( ( fp = cupsFileOpenFd ( fd , mode ) ) == NULL )  if ( * mode == 's' )  close ( fd ); 