static void goodG2B() wchar_t * data ; data = NULL; wchar_t * dataBuffer = new wchar_t [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE124_Buffer_Underwrite__new_wchar_t_ncpy_82_base * baseObject = new CWE124_Buffer_Underwrite__new_wchar_t_ncpy_82_goodG2B baseObject -> action ( data ); void CWE124_Buffer_Underwrite__new_wchar_t_ncpy_82_goodG2B::action(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 