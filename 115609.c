CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_83_goodG2B::~CWE194_Unexpected_Sign_Extension__connect_socket_memcpy_83_goodG2B() char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 