static void goodG2B() list < wchar_t * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<wchar_t *> dataList) wchar_t * data = dataList . back ( ) ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 