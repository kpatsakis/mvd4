void bad() char * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad(char * dataCopy) data = dataCopy; data = ( char * ) malloc ( 10 * sizeof ( char ) ); delete badObject CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_84_bad() char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 