void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_09_bad() wchar_t * data ; data = NULL; if ( GLOBAL_CONST_TRUE )  data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 