void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_18_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 