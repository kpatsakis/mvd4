void bad() char * data ; char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__char_declare_ncpy_82_base * baseObject = new CWE127_Buffer_Underread__char_declare_ncpy_82_bad baseObject -> action ( data ); void CWE127_Buffer_Underread__char_declare_ncpy_82_bad::action(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; strncpy ( dest , data , strlen ( dest ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 