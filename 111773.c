void CWE400_Resource_Exhaustion__fscanf_fwrite_08_bad() int count ; count = - 1; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  