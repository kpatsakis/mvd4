static void goodG2B2() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_22_goodG2B2Source ( data ); wchar_t * CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_22_goodG2B2Source(wchar_t * data) if ( CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_22_goodG2B2Global )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" memcpy ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 