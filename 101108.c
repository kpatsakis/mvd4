static void goodB2G1() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE124_Buffer_Underwrite__CWE839_fgets_22_goodB2G1Sink ( data ); void CWE124_Buffer_Underwrite__CWE839_fgets_22_goodB2G1Sink(int data) if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 