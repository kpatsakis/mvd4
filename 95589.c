void CWE400_Resource_Exhaustion__connect_socket_fwrite_54b_badSink(int count) CWE400_Resource_Exhaustion__connect_socket_fwrite_54c_badSink ( count ); void CWE400_Resource_Exhaustion__connect_socket_fwrite_54c_badSink(int count) CWE400_Resource_Exhaustion__connect_socket_fwrite_54d_badSink ( count ); void CWE400_Resource_Exhaustion__connect_socket_fwrite_54d_badSink(int count) CWE400_Resource_Exhaustion__connect_socket_fwrite_54e_badSink ( count ); void CWE400_Resource_Exhaustion__connect_socket_fwrite_54e_badSink(int count) const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  