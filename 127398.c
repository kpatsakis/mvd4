void CWE426_Untrusted_Search_Path__char_popen_54_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , BAD_OS_COMMAND ); CWE426_Untrusted_Search_Path__char_popen_54b_badSink ( data ); void CWE426_Untrusted_Search_Path__char_popen_54b_badSink(char * data) CWE426_Untrusted_Search_Path__char_popen_54c_badSink ( data ); void CWE426_Untrusted_Search_Path__char_popen_54c_badSink(char * data) CWE426_Untrusted_Search_Path__char_popen_54d_badSink ( data ); void CWE426_Untrusted_Search_Path__char_popen_54d_badSink(char * data) CWE426_Untrusted_Search_Path__char_popen_54e_badSink ( data ); void CWE426_Untrusted_Search_Path__char_popen_54e_badSink(char * data) pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 