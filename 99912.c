static void goodG2B() wchar_t * data ; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_34_unionType myUnion ; data = NULL; wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; free ( data ); 