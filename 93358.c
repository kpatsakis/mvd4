static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_82_goodG2B::action(wchar_t * data) wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 