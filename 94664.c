static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; strcat ( data , "c:\\temp\\file.txt" ); CWE36_Absolute_Path_Traversal__char_file_fopen_82_base * baseObject = new CWE36_Absolute_Path_Traversal__char_file_fopen_82_goodG2B baseObject -> action ( data ); void CWE36_Absolute_Path_Traversal__char_file_fopen_82_goodG2B::action(char * data) pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 