void CWE126_Buffer_Overread__wchar_t_alloca_loop_07_bad() wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L wmemset ( dataGoodBuffer , L 'A' , 100 - 1 dataGoodBuffer [ 100 - 1 ] = L '\0' size_t i , destLen ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' destLen = wcslen ( dest ); for (i = 0; i < destLen; i++) 