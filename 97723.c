void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_08_bad() char * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 