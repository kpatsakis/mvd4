static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_snprintf_84_goodG2B() wchar_t dest [ 50 ] = L "" SNPRINTF ( dest , wcslen ( data ) , L "%s" , data ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 