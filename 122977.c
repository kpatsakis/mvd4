static void goodG2B() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; strcat ( data , "*.*" ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 