static void goodG2B() char * data ; unionType myUnion ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; strcat ( data , "c:\\temp\\file.txt" ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 