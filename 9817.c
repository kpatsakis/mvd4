static void goodG2B() wchar_t * data ; CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67_structType myStruct ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; myStruct . structFirst = data; CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67b_goodG2BSink ( myStruct ); void CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67b_goodG2BSink(CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' wcsncpy ( dest , data , wcslen ( dest ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 