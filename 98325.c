void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_bad() FILE * data ; data = NULL; data = fopen ( "BadSource_fopen.txt" , "w+" ); badSink ( data ); static void badSink(FILE * data) if ( badStatic )  data = fopen ( "BadSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 