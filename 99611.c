void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_bad() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; free ( data ); 