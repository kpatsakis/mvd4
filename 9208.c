static void goodG2B() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_ncpy_82_goodG2B::action(char * data) char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 