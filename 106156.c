void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53_bad() HANDLE data ; data = CreateFile ( "BadSource_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53b_badSink ( data ); void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53b_badSink(HANDLE data) CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53c_badSink ( data ); void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53c_badSink(HANDLE data) CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53d_badSink ( data ); void CWE404_Improper_Resource_Shutdown__w32CreateFile_close_53d_badSink(HANDLE data) if ( data != INVALID_HANDLE_VALUE )  _close ( ( int ) data ); 