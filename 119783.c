static void goodB2G() char * data ; data = NULL; char myString [ ] = "myString" ; data = strdup ( myString ); goodB2GSink_b ( data ); void goodB2GSink_b(char * data) goodB2GSink_c ( data ); void goodB2GSink_c(char * data) free ( data ); 