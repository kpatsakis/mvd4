static void goodG2B() char * data ; char dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 