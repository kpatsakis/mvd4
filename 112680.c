static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_82_goodG2B::action(wchar_t * data) wcscat ( dest , data ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 