void CWE606_Unchecked_Loop_Condition__char_console_22_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; CWE606_Unchecked_Loop_Condition__char_console_22_badSink ( data ); void CWE606_Unchecked_Loop_Condition__char_console_22_badSink(char * data) if ( CWE606_Unchecked_Loop_Condition__char_console_22_badGlobal )  if ( sscanf ( data , "%d" , & n ) == 1 )  