static void goodB2G2() FILE * data ; data = NULL; data = fopen ( "BadSource_fopen.txt" , "w+" ); CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Sink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Sink(FILE * data) if ( CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Global )  data = fopen ( "GoodSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 