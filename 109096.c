static void goodG2B1() int * data ; data = NULL; data = CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_22_goodG2B1Source ( data ); int * CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_22_goodG2B1Source(int * data) if ( CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_22_goodG2B1Global )  data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); return data ; int source [ 10 ] = { 0 } ; memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 