void CWE78_OS_Command_Injection__char_file_execlp_63_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE78_OS_Command_Injection__char_file_execlp_63b_badSink ( & data ); void CWE78_OS_Command_Injection__char_file_execlp_63b_badSink(char * * dataPtr) char * data = * dataPtr ; 