void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53b_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53b_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53c_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53c_badSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53d_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_53d_badSink(size_t data) if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 