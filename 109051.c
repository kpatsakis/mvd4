static void goodB2G1() wchar_t * data ; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) goodB2G1Sink ( data ); static void goodB2G1Sink(wchar_t * data) free ( data ); 