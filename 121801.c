static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_63b_goodG2BSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 