static void goodG2B() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; strcat ( data , "*.*" ); CWE78_OS_Command_Injection__char_connect_socket_popen_52b_goodG2BSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_popen_52b_goodG2BSink(char * data) CWE78_OS_Command_Injection__char_connect_socket_popen_52c_goodG2BSink ( data ); void CWE78_OS_Command_Injection__char_connect_socket_popen_52c_goodG2BSink(char * data) pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 