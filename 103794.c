static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; strcat ( data , "c:\\temp\\file.txt" ); dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 