static void goodG2B() wchar_t * data ; data = NULL; data = goodG2BSource ( data ); static wchar_t * goodG2BSource(wchar_t * data) wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; return data ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' wcsncpy ( dest , data , wcslen ( dest ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 