void CWE401_Memory_Leak__char_realloc_32_bad() char * data ; char * * dataPtr1 = & data ; data = NULL; char * data = * dataPtr1 ; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); * dataPtr1 = data; 