static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B(char * dataCopy) data = dataCopy; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_84_goodG2B() free ( data ); 