void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_34_bad() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_34_unionType myUnion ; data = - 1; myUnion . unionFirst = data; int data = myUnion . unionSecond ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 