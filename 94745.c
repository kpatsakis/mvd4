void CWE124_Buffer_Underwrite__wchar_t_declare_cpy_67_bad() wchar_t * data ; CWE124_Buffer_Underwrite__wchar_t_declare_cpy_67_structType myStruct ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; myStruct . structFirst = data; CWE124_Buffer_Underwrite__wchar_t_declare_cpy_67b_badSink ( myStruct ); void CWE124_Buffer_Underwrite__wchar_t_declare_cpy_67b_badSink(CWE124_Buffer_Underwrite__wchar_t_declare_cpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 