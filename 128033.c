static void goodG2B() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE127_Buffer_Underread__char_declare_memmove_67b_goodG2BSink ( myStruct ); void CWE127_Buffer_Underread__char_declare_memmove_67b_goodG2BSink(CWE127_Buffer_Underread__char_declare_memmove_67_structType myStruct) char * data = myStruct . structFirst ; memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 