void CWE126_Buffer_Overread__malloc_wchar_t_loop_52_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); CWE126_Buffer_Overread__malloc_wchar_t_loop_52b_badSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_loop_52b_badSink(wchar_t * data) CWE126_Buffer_Overread__malloc_wchar_t_loop_52c_badSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_loop_52c_badSink(wchar_t * data) dest [ i ] = data [ i ]; printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 