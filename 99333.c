void CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_bad() char * data ; CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_34_unionType myUnion ; char * dataBadBuffer = ( char * ) ALLOCA ( 50 * sizeof ( char ) ) ; data = dataBadBuffer; data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 