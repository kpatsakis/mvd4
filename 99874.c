void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_67_bad() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_67_structType myStruct ; data = - 1; myStruct . structFirst = data; CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_67b_badSink ( myStruct ); void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_67b_badSink(CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_strncpy_67_structType myStruct) int data = myStruct . structFirst ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 