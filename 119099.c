void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memmove_02_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( 1 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 