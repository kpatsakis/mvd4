static void goodG2B() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; strcat ( data , "*.*" ); CWE78_OS_Command_Injection__char_file_popen_63b_goodG2BSink ( & data ); void CWE78_OS_Command_Injection__char_file_popen_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 