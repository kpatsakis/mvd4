static void goodG2B() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 