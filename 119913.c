void CWE328_Reversible_One_Way_Hash__w32_MD5_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; UCHAR savedHash [ MD5_SUM_SIZE ] , calcHash [ MD5_SUM_SIZE ] ; size_t i ; for (i = 0; i < MD5_SUM_SIZE; i++) ULONG val ; savedHash [ i ] = ( UCHAR ) val; if ( memcmp ( savedHash , calcHash , MD5_SUM_SIZE * sizeof ( UCHAR ) ) == 0 )  