static void goodG2B() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_63b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_63b_goodG2BSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 