static void goodG2B() list < wchar_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 