static void good1() switch ( 5 )  wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wchar_t * tmpData ; wcscpy ( data , L "A String" ) tmpData = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( tmpData != NULL )  data = tmpData; wcscpy ( data , L "New String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 