static void goodB2G1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalTrue )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); printf ( "%s\n" , data ); 