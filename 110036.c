void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_16_bad() size_t data ; data = 0; while ( 1 )  data = rand ( ); while ( 1 )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 