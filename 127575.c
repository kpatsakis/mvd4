static void goodG2B() int count ; count = - 1; count = 20; CWE400_Resource_Exhaustion__listen_socket_fwrite_82_base * baseObject = new CWE400_Resource_Exhaustion__listen_socket_fwrite_82_goodG2B baseObject -> action ( count ); void CWE400_Resource_Exhaustion__listen_socket_fwrite_82_goodG2B::action(int count) const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  