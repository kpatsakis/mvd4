void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_bad() char * data ; if ( 1 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; SNPRINTF ( data , 100 , "%s" , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 