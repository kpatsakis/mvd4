static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); baseObject -> action ( data ); void CWE190_Integer_Overflow__int_fgets_square_82_goodB2G::action(int data) if ( abs ( ( long ) data ) <= ( long ) sqrt ( ( double ) INT_MAX ) )  int result = data * data ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 