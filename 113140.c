void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_32_bad() int * data ; int * * dataPtr2 = & data ; int dataBadBuffer [ 50 ] ; data = dataBadBuffer; int * data = * dataPtr2 ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 