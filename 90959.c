void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_12_bad() wchar_t * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 