static void goodG2B() size_t data ; size_t dataArray [ 5 ] ; data = 0; data = 20; dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_66b_goodG2BSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_66b_goodG2BSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; if ( data > strlen ( HELLO_STRING ) )  