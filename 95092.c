void CWE127_Buffer_Underread__malloc_wchar_t_memmove_34_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 