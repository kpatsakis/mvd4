void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_66_bad() char * data ; char * dataArray [ 5 ] ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 