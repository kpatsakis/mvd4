void bad() char * data ; data = new char [ 100 ]; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 