static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; dataArray [ 2 ] = data; CWE127_Buffer_Underread__wchar_t_declare_memmove_66b_goodG2BSink ( dataArray ); void CWE127_Buffer_Underread__wchar_t_declare_memmove_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , 100 * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 