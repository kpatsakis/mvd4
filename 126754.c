void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_31_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * dataCopy = data ; char * data = dataCopy ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 