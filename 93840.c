static void goodB2G1() size_t data ; data = 0; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 