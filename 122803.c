static void goodG2B2() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Source ( data ); char * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Source(char * data) if ( CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_22_goodG2B2Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcat ( dest , data ); 