static void goodG2B() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE127_Buffer_Underread__char_declare_ncpy_66b_goodG2BSink ( dataArray ); void CWE127_Buffer_Underread__char_declare_ncpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; strncpy ( dest , data , strlen ( dest ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 