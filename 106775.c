static void goodG2B() char * data ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE124_Buffer_Underwrite__malloc_char_loop_82_base * baseObject = new CWE124_Buffer_Underwrite__malloc_char_loop_82_goodG2B baseObject -> action ( data ); void CWE124_Buffer_Underwrite__malloc_char_loop_82_goodG2B::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 