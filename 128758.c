void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_61_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_61b_badSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_loop_61b_badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 