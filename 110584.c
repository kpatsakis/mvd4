static void goodG2B() int data ; int & dataRef = data ; data = - 1; data = 20; int data = dataRef ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 