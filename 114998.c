static void goodG2B() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); * dataPtr1 = data; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 