void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_52_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_52b_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_52c_badSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' free ( data ); 