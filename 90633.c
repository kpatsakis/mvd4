void CWE190_Integer_Overflow__int_fgets_add_67_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myStruct . structFirst = data; CWE190_Integer_Overflow__int_fgets_add_67b_badSink ( myStruct ); void CWE190_Integer_Overflow__int_fgets_add_67b_badSink(CWE190_Integer_Overflow__int_fgets_add_67_structType myStruct) int data = myStruct . structFirst ; int result = data + 1 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 