static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE126_Buffer_Overread__malloc_wchar_t_memmove_51b_goodG2BSink ( data ); void CWE126_Buffer_Overread__malloc_wchar_t_memmove_51b_goodG2BSink(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 