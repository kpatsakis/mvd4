void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_34_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wcscpy ( dest , data ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 