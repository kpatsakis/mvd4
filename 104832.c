static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE606_Unchecked_Loop_Condition__char_file_22_goodB2G1Sink ( data ); void CWE606_Unchecked_Loop_Condition__char_file_22_goodB2G1Sink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  