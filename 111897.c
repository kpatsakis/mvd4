void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_21_bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); free ( data ); 