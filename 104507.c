static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; CWE127_Buffer_Underread__malloc_wchar_t_cpy_51b_goodG2BSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_51b_goodG2BSink(wchar_t * data) wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 