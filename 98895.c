void CWE126_Buffer_Overread__CWE170_char_loop_13_bad() if ( GLOBAL_CONST_FIVE == 5 )  char src [ 150 ] , dest [ 100 ] ; memset ( src , 'A' , 149 ); src [ 149 ] = '\0'; dest [ i ] = src [ i ]; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 