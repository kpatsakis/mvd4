static void good2() if ( staticFive == 5 )  charVoid * structCharVoid = ( charVoid * ) malloc ( sizeof ( charVoid ) ) ; structCharVoid -> voidSecond = ( void * ) SRC_STR; printWLine ( ( wchar_t * ) structCharVoid -> voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) memcpy ( structCharVoid -> charFirst , SRC_STR , sizeof ( structCharVoid -> charFirst ) ); printWLine ( ( wchar_t * ) structCharVoid -> charFirst ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) printWLine ( ( wchar_t * ) structCharVoid -> voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( structCharVoid ); 