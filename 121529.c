void CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_31_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 