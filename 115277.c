static void goodG2B() wchar_t * data ; wchar_t dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; CWE126_Buffer_Overread__wchar_t_declare_loop_82_base * baseObject = new CWE126_Buffer_Overread__wchar_t_declare_loop_82_goodG2B baseObject -> action ( data ); void CWE126_Buffer_Overread__wchar_t_declare_loop_82_goodG2B::action(wchar_t * data) size_t i , destLen ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' destLen = wcslen ( dest ); for (i = 0; i < destLen; i++) 