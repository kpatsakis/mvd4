void CWE190_Integer_Overflow__int_fgets_multiply_51_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE190_Integer_Overflow__int_fgets_multiply_51b_badSink ( data ); void CWE190_Integer_Overflow__int_fgets_multiply_51b_badSink(int data) if ( data > 0 )  int result = data * 2 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 