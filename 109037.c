static void goodG2B() char * data ; char * * dataPtr2 = & data ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; char * data = * dataPtr2 ; free ( data ); 