static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_82_goodG2B::action(char * data) strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 