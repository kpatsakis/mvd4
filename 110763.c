void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_31_bad() size_t data ; data = 0; size_t dataCopy = data ; size_t data = dataCopy ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 