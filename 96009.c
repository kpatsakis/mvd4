static void goodG2B() char * password ; password = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( char ) ) )  strcpy ( password , "Password1234!" ); myStruct . structFirst = password; CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67b_goodG2BSink ( myStruct ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67b_goodG2BSink(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType myStruct) char * password = myStruct . structFirst ; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 