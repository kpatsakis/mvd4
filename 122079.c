void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncpy_21_bad() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcsncpy ( dest , data , wcslen ( data ) ); 