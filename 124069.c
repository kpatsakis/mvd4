void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_10_bad() wchar_t * data ; if ( globalTrue )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 