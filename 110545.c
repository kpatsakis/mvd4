static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_fprintf_82_base * baseObject = new CWE134_Uncontrolled_Format_String__char_environment_fprintf_82_goodB2G baseObject -> action ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_82_goodB2G::action(char * data) fprintf ( stdout , "%s\n" , data ); 