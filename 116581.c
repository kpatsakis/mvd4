void bad() list < int > dataList ; badSink ( dataList ); void badSink(list<int> dataList) int data = dataList . back ( ) ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 