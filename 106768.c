void CWE426_Untrusted_Search_Path__char_popen_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , BAD_OS_COMMAND ); myStruct . structFirst = data; CWE426_Untrusted_Search_Path__char_popen_67b_badSink ( myStruct ); void CWE426_Untrusted_Search_Path__char_popen_67b_badSink(CWE426_Untrusted_Search_Path__char_popen_67_structType myStruct) char * data = myStruct . structFirst ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 