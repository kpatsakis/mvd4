static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_64b_goodG2BSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_64b_goodG2BSink(void * dataVoidPtr) size_t * dataPtr = ( size_t * ) dataVoidPtr ; size_t data = ( * dataPtr ) ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 