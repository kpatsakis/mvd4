void CWE401_Memory_Leak__malloc_realloc_wchar_t_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wcscpy ( data , L "A String" ) data = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( data != NULL )  wcscpy ( data , L "New String" ) wchar_t * data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wchar_t * tmpData ; wcscpy ( data , L "A String" ) tmpData = ( wchar_t * ) realloc ( data , ( 130000 ) * sizeof ( wchar_t ) ); if ( tmpData != NULL )  data = tmpData; wcscpy ( data , L "New String" ) free ( data ); 