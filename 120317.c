static void goodB2G() int count ; int & countRef = count ; count = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); int count = countRef ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 