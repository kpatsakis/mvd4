static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_82_goodB2G baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_82_goodB2G::action(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 