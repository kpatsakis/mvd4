static void goodG2B() char * data ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; char * dataCopy = data ; char * data = dataCopy ; free ( data ); 