static void goodB2G2() FILE * data ; data = NULL; data = fopen ( "BadSource_fopen.txt" , "w+" ); goodB2G2Sink ( data ); static void goodB2G2Sink(FILE * data) if ( goodB2G2Static )  data = fopen ( "GoodSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 