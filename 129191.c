static void goodB2G2() int count ; count = - 1; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; count = RAND32 ( ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 