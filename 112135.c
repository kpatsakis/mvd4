void av_url_split(char *proto,int proto_size,char *authorization,int authorization_size,char *hostname,int hostname_size,int *port_ptr,char *path,int path_size,const char *url) const char * p ; const char * ls2 ; if ( p = ( strchr ( url , ':' ) ) )  p ++; if ( ( * p ) == '/' )  p ++; if ( ( * p ) == '/' )  p ++; ls2 = ( strchr ( p , 63 ) ); ls = ls2; if ( ls && ls2 )  ls = ( ls > ls2 ? ls2 : ls ); if ( ls )  av_strlcpy ( path , ls , path_size ); if ( ls != p )  while ( ( at = ( strchr ( p , 64 ) ) ) && at < ls )  av_strlcpy ( authorization , at2 , ( authorization_size > at + 1 - at2 ? at + 1 - at2 : authorization_size ) ); p = at + 1; if ( ( * p ) == '[' && ( brk = ( strchr ( p , ']' ) ) ) && brk < ls )  av_strlcpy ( hostname , p + 1 , ( hostname_size > brk - p ? brk - p : hostname_size ) ); if ( brk [ 1 ] == ':' && port_ptr )  * port_ptr = atoi ( brk + 2 ); if ( ( col = ( strchr ( p , ':' ) ) ) && col < ls )  av_strlcpy ( hostname , p , ( col + 1 - p > hostname_size ? hostname_size : col + 1 - p ) ); if ( port_ptr )  * port_ptr = atoi ( col + 1 ); av_strlcpy ( hostname , p , ( ls + 1 - p > hostname_size ? hostname_size : ls + 1 - p ) ); 