static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; strcat ( data , "file.txt" ); goodG2BSink ( & data ); void goodG2BSink(char * * dataPtr) char * data = * dataPtr ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 