void bad() list < wchar_t * > dataList ; badSink ( dataList ); void badSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; wchar_t source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = wcslen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 