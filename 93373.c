void bad() wchar_t * data ; data = new wchar_t [ 100 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad(wchar_t * dataCopy) data = dataCopy; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_loop_84_bad() size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 