void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_66_bad() HANDLE data ; HANDLE dataArray [ 5 ] ; data = INVALID_HANDLE_VALUE; data = CreateFile ( "BadSource_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); dataArray [ 2 ] = data; CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_66b_badSink ( dataArray ); void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_66b_badSink(HANDLE dataArray[]) HANDLE data = dataArray [ 2 ] ; if ( data != INVALID_HANDLE_VALUE )  fclose ( ( FILE * ) data ); 