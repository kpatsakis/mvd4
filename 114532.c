static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; data = goodG2BSource ( data ); wchar_t * goodG2BSource(wchar_t * data) return data ; FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 