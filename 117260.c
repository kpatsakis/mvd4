void bad() int data ; data = - 1; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad(int dataCopy) data = dataCopy; data = RAND32 ( ); delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_84_bad() int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 )  buffer [ data ] = 1; free ( buffer ); 