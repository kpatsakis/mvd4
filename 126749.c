static void goodB2G() char * data ; data = NULL; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete [ ] data goodB2GSink ( & data ); void goodB2GSink(char * * dataPtr) char * data = * dataPtr ; 