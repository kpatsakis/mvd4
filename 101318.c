static void goodB2G() int * data ; data = NULL; CWE401_Memory_Leak__int_realloc_84_goodB2G * goodB2GObject = new CWE401_Memory_Leak__int_realloc_84_goodB2G ( data ) ; CWE401_Memory_Leak__int_realloc_84_goodB2G::CWE401_Memory_Leak__int_realloc_84_goodB2G(int * dataCopy) data = dataCopy; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 