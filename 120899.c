static void goodG2B2() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_goodG2B2Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_goodG2B2Source(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_22_goodG2B2Global )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 