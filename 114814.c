void bad() char * data ; char * & dataRef = data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = dataRef ; char dest [ 50 ] = "" ; strcat ( dest , data ); 