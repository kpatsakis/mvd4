static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memmove_61b_goodG2BSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memmove_61b_goodG2BSource(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 