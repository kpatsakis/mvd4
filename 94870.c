void CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myStruct . structFirst = data; CWE197_Numeric_Truncation_Error__int_fgets_to_char_67b_badSink ( myStruct ); void CWE197_Numeric_Truncation_Error__int_fgets_to_char_67b_badSink(CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType myStruct) int data = myStruct . structFirst ; char charData = ( char ) data ; printHexCharLine ( charData ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); 