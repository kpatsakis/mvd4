void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_04_bad() size_t data ; data = 0; if ( STATIC_CONST_TRUE )  data = rand ( ); if ( STATIC_CONST_TRUE )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 