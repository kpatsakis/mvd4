void bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; 