static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; myStruct . structFirst = data; CWE124_Buffer_Underwrite__malloc_wchar_t_loop_67b_goodG2BSink ( myStruct ); void CWE124_Buffer_Underwrite__malloc_wchar_t_loop_67b_goodG2BSink(CWE124_Buffer_Underwrite__malloc_wchar_t_loop_67_structType myStruct) wchar_t * data = myStruct . structFirst ; data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 