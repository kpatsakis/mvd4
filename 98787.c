static void goodB2G2() if ( globalFive == 5 )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); if ( data < INT_MAX )  int result = data + 1 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 