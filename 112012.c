static void goodB2G() void * data ; data = NULL; data = ( void * ) WIDE_STRING; goodB2GSink ( data ); static void goodB2GSink(void * data) size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 