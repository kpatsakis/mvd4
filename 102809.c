void bad() char * data ; unionType myUnion ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 