static void goodG2B() int data ; data = - 1; data = 100 - 1; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_82_base * baseObject = new CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_82_goodG2B baseObject -> action ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_82_goodG2B::action(int data) char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 