void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_32_bad() size_t data ; size_t * dataPtr2 = & data ; data = 0; data = rand ( ); size_t data = * dataPtr2 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 