void CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_68b_badSink() size_t data = CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_68_badData ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 