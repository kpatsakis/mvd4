void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_15_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; switch ( 6 )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 