void CWE197_Numeric_Truncation_Error__int_fgets_to_short_52_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE197_Numeric_Truncation_Error__int_fgets_to_short_52b_badSink ( data ); void CWE197_Numeric_Truncation_Error__int_fgets_to_short_52b_badSink(int data) CWE197_Numeric_Truncation_Error__int_fgets_to_short_52c_badSink ( data ); void CWE197_Numeric_Truncation_Error__int_fgets_to_short_52c_badSink(int data) short shortData = ( short ) data ; printShortLine ( shortData ); void printShortLine (short shortNumber) printf ( "%hd\n" , shortNumber ); 