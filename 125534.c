void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_34_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 