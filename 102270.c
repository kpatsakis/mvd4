void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_02_bad() int * data ; int * dataBadBuffer = ( int * ) ALLOCA ( 50 * sizeof ( int ) ) ; if ( 1 )  data = dataBadBuffer; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 