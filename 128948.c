void bad() char * data ; data = new char [ 100 ]; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 