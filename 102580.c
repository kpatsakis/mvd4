void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_bad * badObject = new CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_bad ( data ) ; CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_bad::CWE256_Plaintext_Storage_of_Password__w32_wchar_t_84_bad(wchar_t * dataCopy) FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  fclose ( pFile ); 