static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_82_goodG2B::action(wchar_t * data) wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 