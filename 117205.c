static void goodB2G() char * data ; data = NULL; CWE401_Memory_Leak__strdup_char_84_goodB2G * goodB2GObject = new CWE401_Memory_Leak__strdup_char_84_goodB2G ( data ) ; CWE401_Memory_Leak__strdup_char_84_goodB2G::CWE401_Memory_Leak__strdup_char_84_goodB2G(char * dataCopy) char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 