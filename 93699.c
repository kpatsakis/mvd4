void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_31_bad() size_t data ; data = 0; data = rand ( ); size_t dataCopy = data ; size_t data = dataCopy ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 