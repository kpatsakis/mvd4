void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_66_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 