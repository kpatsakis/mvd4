void pgstat_init() socklen_t alen ; struct addrinfo * addrs = ( ( void * ) 0 ) ; struct addrinfo * addr ; struct addrinfo hints ; int ret ; fd_set rset ; struct timeval tv ; char test_byte ; int sel_res ; hints . ai_flags = 0x0001; hints . ai_family = 0; hints . ai_socktype = SOCK_DGRAM; hints . ai_protocol = 0; hints . ai_addrlen = 0; hints . ai_addr = ( ( void * ) 0 ); hints . ai_canonname = ( ( void * ) 0 ); hints . ai_next = ( ( void * ) 0 ); ret = pg_getaddrinfo_all ( "localhost" , ( ( void * ) 0 ) , ( & hints ) , & addrs ); if ( ret || ! addrs )  for (addr = addrs; addr; addr = addr -> ai_next) if ( addr -> ai_family == 1 )  if ( ( pgStatSock = socket ( addr -> ai_family , SOCK_DGRAM , 0 ) ) == - 1 )  if ( bind ( pgStatSock , ( addr -> ai_addr ) , addr -> ai_addrlen ) < 0 )  alen = ( sizeof ( pgStatAddr ) ); if ( getsockname ( pgStatSock , ( struct sockaddr * ) ( & pgStatAddr ) , & alen ) < 0 )  if ( connect ( pgStatSock , ( ( struct sockaddr * ) ( & pgStatAddr ) ) , alen ) < 0 )  test_byte = ( ( char ) 199 ); if ( send ( pgStatSock , ( & test_byte ) , 1 , 0 ) != 1 )  if ( * __errno_location ( ) == 4 )  ( & rset ) -> fds_bits [ pgStatSock / ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ] |= ( ( __fd_mask ) 1 ) << pgStatSock % ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ); tv . tv_sec = 0; tv . tv_usec = 500000; sel_res = select ( pgStatSock + 1 , & rset , ( ( void * ) 0 ) , ( ( void * ) 0 ) , & tv ); if ( sel_res >= 0 || * __errno_location ( ) != 4 )  if ( sel_res < 0 )  if ( sel_res == 0 || ! ( ( ( & rset ) -> fds_bits [ pgStatSock / ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ] & ( ( __fd_mask ) 1 ) << pgStatSock % ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ) != 0 ) )  test_byte ++; if ( recv ( pgStatSock , ( & test_byte ) , 1 , 0 ) != 1 )  if ( * __errno_location ( ) == 4 )  if ( test_byte != ( ( char ) 199 ) )  close ( pgStatSock ); 