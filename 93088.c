static void goodG2B2() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; strcat ( data , "c:\\temp\\file.txt" ); hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 