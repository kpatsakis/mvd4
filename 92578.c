static void goodG2B2() wchar_t * data ; data = NULL; data = goodG2B2Source ( data ); wchar_t * goodG2B2Source(wchar_t * data) if ( goodG2B2Global )  data = new wchar_t [ 100 ]; data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 