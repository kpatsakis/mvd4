static void goodG2B() char * data ; CWE126_Buffer_Overread__malloc_char_memcpy_67_structType myStruct ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE126_Buffer_Overread__malloc_char_memcpy_67b_goodG2BSink ( myStruct ); void CWE126_Buffer_Overread__malloc_char_memcpy_67b_goodG2BSink(CWE126_Buffer_Overread__malloc_char_memcpy_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 