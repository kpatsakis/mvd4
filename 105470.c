static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = goodG2BSource ( data ); static char * goodG2BSource(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 