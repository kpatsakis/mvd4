static void goodG2B2() char * password ; password = ""; password = CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_22_goodG2B2Source ( password ); char * CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_22_goodG2B2Source(char * password) if ( CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_22_goodG2B2Global )  password = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( password , "Password1234!" ); return password ; free ( password ); 