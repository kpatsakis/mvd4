void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_51_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_51b_badSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 