void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_12_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dest [ i ] = data [ i ]; dest [ 50 - 1 ] = '\0'; 