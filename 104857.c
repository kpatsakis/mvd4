static void goodG2B() vector < int * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<int *> dataVector) int * data = dataVector [ 2 ] ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 