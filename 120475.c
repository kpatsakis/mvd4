void bad() char * data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memmove_82_bad::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 