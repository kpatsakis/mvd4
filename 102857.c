static void goodG2B() short data ; data = 0; data = 100 - 1; CWE194_Unexpected_Sign_Extension__connect_socket_memmove_63b_goodG2BSink ( & data ); void CWE194_Unexpected_Sign_Extension__connect_socket_memmove_63b_goodG2BSink(short * dataPtr) short data = * dataPtr ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 