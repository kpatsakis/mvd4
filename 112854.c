void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_12_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' free ( data ); 