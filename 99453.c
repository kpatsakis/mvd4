static void goodG2B() int h ; wchar_t * data ; for(h = 0; h < 1; h++) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); memcpy ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 