static void goodB2G() size_t data ; data = 0; data = goodB2GSource ( data ); static size_t goodB2GSource(size_t data) return data ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 