static void goodB2G2() wchar_t * data ; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(wchar_t * data) if ( data != NULL )  wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 