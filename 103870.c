static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char * dataCopy = data ; char * data = dataCopy ; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 