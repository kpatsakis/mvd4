void bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) int data = myStruct . structFirst ; dataBytes = data * sizeof ( int ); intPointer = ( int * ) new char [ dataBytes ]; for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] intPointer 