static char **inboth(char **left,char **right) char * * both ; if ( left == ( ( void * ) 0 ) || right == ( ( void * ) 0 ) )  both = ( malloc ( sizeof ( ( * both ) ) ) ); if ( both == ( ( void * ) 0 ) )  both [ 0 ] = ( ( void * ) 0 ); freelist ( both ); static void freelist(char **cpp) if ( cpp == ( ( void * ) 0 ) )  for (i = 0; cpp[i] != ((void *)0); ++i) free ( cpp [ i ] ); cpp [ i ] = ( ( void * ) 0 ); both = addlists ( both , temp ); if ( both == ( ( void * ) 0 ) )  return both ; 