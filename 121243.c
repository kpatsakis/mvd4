void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_67_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_67_structType myStruct) char * data = myStruct . structFirst ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 