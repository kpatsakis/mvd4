static void goodG2B() int count ; count = - 1; count = 20; CWE400_Resource_Exhaustion__connect_socket_fwrite_63b_goodG2BSink ( & count ); void CWE400_Resource_Exhaustion__connect_socket_fwrite_63b_goodG2BSink(int * countPtr) int count = * countPtr ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  