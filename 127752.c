static void goodG2B2() wchar_t * data ; if ( 5 == 5 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 