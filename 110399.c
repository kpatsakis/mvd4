static void goodG2B2() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_22_goodG2B2Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_22_goodG2B2Source(wchar_t * data) wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wcscpy ( dest , data ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 