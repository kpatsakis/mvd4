static void goodG2B() short data ; short * dataPtr2 = & data ; data = 0; data = 100 - 1; short data = * dataPtr2 ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 