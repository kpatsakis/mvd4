void CWE401_Memory_Leak__strdup_char_34_bad() char * data ; char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; 