void CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) realloc ( data , 20 * sizeof ( wchar_t ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__wchar_t_realloc_67b_badSink ( myStruct ); void CWE690_NULL_Deref_From_Return__wchar_t_realloc_67b_badSink(CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType myStruct) wchar_t * data = myStruct . structFirst ; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 