void bad() wchar_t * data ; map < int , wchar_t * > dataMap ; data = NULL; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); free ( data ); 