static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 