static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_51b_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_51b_goodB2GSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 