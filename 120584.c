static void goodG2B() wchar_t * data ; data = NULL; data = new wchar_t [ 10 + 1 ]; goodG2BSink ( & data ); void goodG2BSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 