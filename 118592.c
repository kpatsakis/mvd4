static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52b_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52b_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52c_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52c_goodG2BSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 