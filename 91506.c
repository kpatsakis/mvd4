static void goodB2G1() if ( 1 )  char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); if ( abs ( ( long ) data ) <= ( long ) sqrt ( ( double ) INT_MAX ) )  int result = data * data ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 