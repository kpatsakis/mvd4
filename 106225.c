void bad() wchar_t * data ; data = NULL; data = new wchar_t [ 50 ]; data [ 0 ] = L '\0' badSink ( & data ); void badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 