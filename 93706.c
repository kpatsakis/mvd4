void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_32_bad() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; char dataBuffer [ 100 ] ; data = dataBuffer; char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = * dataPtr2 ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 