static void goodB2G() int count ; count = - 1; CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G * goodB2GObject = new CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G ( count ) ; CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G::CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G(int countCopy) count = countCopy; count = RAND32 ( ); delete goodB2GObject CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G::~CWE400_Resource_Exhaustion__rand_fwrite_84_goodB2G() const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 