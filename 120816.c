void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_66_bad() size_t data ; size_t dataArray [ 5 ] ; data = 0; data = rand ( ); dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_66b_badSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_66b_badSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 