void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_03_bad() wchar_t * data ; if ( 5 == 5 )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 