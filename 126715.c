static void goodB2G() wchar_t * data ; data = NULL; data = ( wchar_t * ) realloc ( data , 20 * sizeof ( wchar_t ) ); CWE690_NULL_Deref_From_Return__wchar_t_realloc_53b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__wchar_t_realloc_53b_goodB2GSink(wchar_t * data) CWE690_NULL_Deref_From_Return__wchar_t_realloc_53c_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__wchar_t_realloc_53c_goodB2GSink(wchar_t * data) CWE690_NULL_Deref_From_Return__wchar_t_realloc_53d_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__wchar_t_realloc_53d_goodB2GSink(wchar_t * data) if ( data != NULL )  wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 