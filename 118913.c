void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_63_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_63b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_63b_badSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 