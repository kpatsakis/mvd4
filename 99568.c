void CWE127_Buffer_Underread__malloc_wchar_t_cpy_54_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_wchar_t_cpy_54b_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_54b_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_cpy_54c_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_54c_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_cpy_54d_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_54d_badSink(wchar_t * data) CWE127_Buffer_Underread__malloc_wchar_t_cpy_54e_badSink ( data ); void CWE127_Buffer_Underread__malloc_wchar_t_cpy_54e_badSink(wchar_t * data) wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 