int CONF_parse_list(const char *list_,int sep,int nospc,int (*list_cb)(const char *, int , void *),void *arg) int ret ; const char * lstart ; const char * tmpend ; const char * p ; if ( list_ == ( ( void * ) 0 ) )  lstart = list_; if ( nospc )  while ( * lstart && ( * __ctype_b_loc ( ) ) [ ( int ) ( ( unsigned char ) ( * lstart ) ) ] & ( ( unsigned short ) _ISspace ) )  lstart ++; p = ( strchr ( lstart , sep ) ); if ( p == lstart || ! ( * lstart ) )  ret = list_cb ( ( ( void * ) 0 ) , 0 , arg ); if ( p )  tmpend = p - 1; tmpend = lstart + strlen ( lstart ) - 1; if ( nospc )  while ( ( * __ctype_b_loc ( ) ) [ ( int ) ( ( unsigned char ) ( * tmpend ) ) ] & ( ( unsigned short ) _ISspace ) )  tmpend --; ret = list_cb ( lstart , ( tmpend - lstart + 1 ) , arg ); if ( ret <= 0 )  return ret ; if ( p == ( ( void * ) 0 ) )  lstart = p + 1; 