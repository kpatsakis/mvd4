static void goodG2B2() wchar_t * data ; data = NULL; data = goodG2B2Source ( data ); static wchar_t * goodG2B2Source(wchar_t * data) if ( goodG2B2Static )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; free ( data ); 