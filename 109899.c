void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_53d_badSink(char * data) data [ i ] = source [ i ]; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 