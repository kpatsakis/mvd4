CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_83_goodG2B::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_83_goodG2B() char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 