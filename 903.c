void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54b_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54c_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54c_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54d_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54d_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54e_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54e_badSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 