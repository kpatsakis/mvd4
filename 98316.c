void CWE194_Unexpected_Sign_Extension__fgets_memmove_52_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); CWE194_Unexpected_Sign_Extension__fgets_memmove_52b_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_memmove_52b_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_memmove_52c_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_memmove_52c_badSink(short data) if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 