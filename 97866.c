static void goodG2B1() wchar_t * data ; data = NULL; data = goodG2B1Source ( data ); static wchar_t * goodG2B1Source(wchar_t * data) if ( goodG2B1Static )  data = new wchar_t [ 100 ]; data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 