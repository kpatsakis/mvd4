void CWE606_Unchecked_Loop_Condition__char_file_15_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; switch ( 6 )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( sscanf ( data , "%d" , & n ) == 1 )  