static void goodG2B() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B * goodG2BObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B::CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B(size_t dataCopy) data = dataCopy; data = 20; delete goodG2BObject CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_goodG2B() char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 