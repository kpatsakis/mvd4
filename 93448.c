void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_41_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_41_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_41_badSink(wchar_t * data) wchar_t dest [ 50 ] = L "" wcsncpy ( dest , data , wcslen ( data ) ); 