void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_63b_badSink(char * * dataPtr) char * data = * dataPtr ; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 