void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_82_bad::action(wchar_t * data) wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 