void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_32_bad() wchar_t * data ; wchar_t * * dataPtr2 = & data ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t * data = * dataPtr2 ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' free ( data ); 