void CWE256_Plaintext_Storage_of_Password__w32_char_06_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; 