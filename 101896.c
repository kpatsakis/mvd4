void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54b_badSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54c_badSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54c_badSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54d_badSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54d_badSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54e_badSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memmove_54e_badSink(int data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 