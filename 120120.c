void CWE401_Memory_Leak__wchar_t_malloc_17_bad() int i , j ; wchar_t * data ; for(i = 0; i < 1; i++) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 