static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53b_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53b_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53c_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53c_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53d_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_53d_goodG2BSink(wchar_t * data) wcsncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 