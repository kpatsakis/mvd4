void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_52_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_52b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memcpy_52c_badSink(char * data) char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 