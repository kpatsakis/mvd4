void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncpy_63_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( 50 * sizeof ( char ) ) ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncpy_63b_badSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_ncpy_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 