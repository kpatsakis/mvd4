static void goodG2B() int h ; wchar_t * data ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( ( 10 + 1 ) * sizeof ( wchar_t ) ) ; for(h = 0; h < 1; h++) data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 