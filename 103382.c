void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_structType myStruct) char * data = myStruct . structFirst ; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 