void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_badSource ( data ); wchar_t * CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_badSource(wchar_t * data) if ( CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_badGlobal )  wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 