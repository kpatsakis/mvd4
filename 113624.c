static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE124_Buffer_Underwrite__wchar_t_declare_memmove_63b_goodG2BSink ( & data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memmove_63b_goodG2BSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 