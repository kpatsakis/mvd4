void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54c_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54d_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_54e_goodG2BSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); free ( data ); 