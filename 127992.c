static void goodB2G1() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); goodB2G1Sink ( data ); static void goodB2G1Sink(int data) if ( data != 0 )  printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 