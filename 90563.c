static void goodG2B1() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; data = goodG2B1Source ( data ); static wchar_t * goodG2B1Source(wchar_t * data) if ( goodG2B1Static )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 