static void goodG2B() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE127_Buffer_Underread__malloc_char_loop_66b_goodG2BSink ( dataArray ); void CWE127_Buffer_Underread__malloc_char_loop_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 