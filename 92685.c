void CWE134_Uncontrolled_Format_String__char_environment_fprintf_05_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticTrue )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); if ( staticTrue )  fprintf ( stdout , data ); 