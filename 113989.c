static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; CWE606_Unchecked_Loop_Condition__char_console_54b_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_console_54b_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_console_54c_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_console_54c_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_console_54d_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_console_54d_goodB2GSink(char * data) CWE606_Unchecked_Loop_Condition__char_console_54e_goodB2GSink ( data ); void CWE606_Unchecked_Loop_Condition__char_console_54e_goodB2GSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  