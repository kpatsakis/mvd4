void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54c_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54d_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_54e_goodG2BSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 