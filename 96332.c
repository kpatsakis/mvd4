void CWE121_Stack_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad() if ( globalFive == 5 )  charVoid structCharVoid ; structCharVoid . voidSecond = ( void * ) SRC_STR; memmove ( structCharVoid . charFirst , SRC_STR , sizeof ( structCharVoid ) ); printWLine ( ( wchar_t * ) structCharVoid . charFirst ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) printWLine ( ( wchar_t * ) structCharVoid . voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 