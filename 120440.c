static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; char * pointer = ( char * ) malloc ( sizeof ( char ) ) ; * pointer = data; char data = * pointer ; printHexCharLine ( data ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); free ( pointer ); 