static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_64b_goodB2GSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_64b_goodB2GSink(void * dataVoidPtr) size_t * dataPtr = ( size_t * ) dataVoidPtr ; size_t data = ( * dataPtr ) ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 