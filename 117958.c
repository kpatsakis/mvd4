void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_67_structType myStruct) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 