void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53b_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53c_badSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_53d_badSink(wchar_t * data) wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 