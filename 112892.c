void bad() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) char * data = myStruct . structFirst ; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 