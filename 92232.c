void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_31_bad() wchar_t * data ; wchar_t dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 