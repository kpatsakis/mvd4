static void goodG2B1() wchar_t * data ; wchar_t dataGoodBuffer [ 10 + 1 ] ; if ( 0 )  data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 