static void goodB2G() wchar_t * data ; while ( 1 )  data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 