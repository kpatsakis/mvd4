void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memcpy_08_bad() int64_t * data ; int64_t dataBadBuffer [ 50 ] ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataBadBuffer; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 