static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE126_Buffer_Overread__malloc_char_loop_52b_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_char_loop_52b_goodG2BSink(char * data) CWE126_Buffer_Overread__malloc_char_loop_52c_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_char_loop_52c_goodG2BSink(char * data) dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 