void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54b_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54c_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54c_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54d_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54d_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54e_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_54e_goodG2BSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 