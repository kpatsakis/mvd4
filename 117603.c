static void goodG2B1() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_goodG2B1Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_goodG2B1Source(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_goodG2B1Global )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); 