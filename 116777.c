void CWE124_Buffer_Underwrite__char_declare_loop_53_bad() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_declare_loop_53b_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_loop_53b_badSink(char * data) CWE124_Buffer_Underwrite__char_declare_loop_53c_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_loop_53c_badSink(char * data) CWE124_Buffer_Underwrite__char_declare_loop_53d_badSink ( data ); void CWE124_Buffer_Underwrite__char_declare_loop_53d_badSink(char * data) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 