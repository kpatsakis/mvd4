static void goodG2B1() wchar_t * data ; data = NULL; if ( globalFive != 5 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' free ( data ); 