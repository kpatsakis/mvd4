static void goodB2G2() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE369_Divide_by_Zero__int_fgets_divide_22_goodB2G2Sink ( data ); void CWE369_Divide_by_Zero__int_fgets_divide_22_goodB2G2Sink(int data) if ( data != 0 )  printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 