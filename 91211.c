void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63_bad() char * data ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cat_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 