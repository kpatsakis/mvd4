void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcat ( dest , data ); 