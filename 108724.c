void CWE126_Buffer_Overread__malloc_char_memcpy_68b_badSink() char * data = CWE126_Buffer_Overread__malloc_char_memcpy_68_badData ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 