void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_67_bad() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_67_structType myStruct ; data = 0; data = rand ( ); myStruct . structFirst = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_67b_badSink ( myStruct ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_67b_badSink(CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_67_structType myStruct) size_t data = myStruct . structFirst ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 