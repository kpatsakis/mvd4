void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52_bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52b_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52b_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52c_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_52c_badSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 