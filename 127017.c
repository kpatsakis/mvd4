void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_07_bad() char * data ; data = NULL; if ( staticFive == 5 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); 