static void goodG2B() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE124_Buffer_Underwrite__char_alloca_cpy_63b_goodG2BSink ( & data ); void CWE124_Buffer_Underwrite__char_alloca_cpy_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 