void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_64_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' CWE126_Buffer_Overread__malloc_wchar_t_memcpy_64b_badSink ( & data ); void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; free ( data ); 