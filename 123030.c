void CWE194_Unexpected_Sign_Extension__fscanf_memcpy_67b_badSink(CWE194_Unexpected_Sign_Extension__fscanf_memcpy_67_structType myStruct) char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 