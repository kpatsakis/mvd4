void CWE401_Memory_Leak__strdup_char_11_bad() char * data ; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 