void CWE400_Resource_Exhaustion__rand_fwrite_41_bad() int count ; count = - 1; count = RAND32 ( ); badSink ( count ); static void badSink(int count) const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  