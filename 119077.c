void CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cpy_11_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 