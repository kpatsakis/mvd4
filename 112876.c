static void goodG2B() wchar_t * data ; wchar_t dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_ncpy_63b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_ncpy_63b_goodG2BSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 