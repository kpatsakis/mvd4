void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_bad() FILE * data ; data = NULL; data = CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_badSource ( data ); FILE * CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_badSource(FILE * data) data = fopen ( "BadSource_fopen.txt" , "w+" ); return data ; data = fopen ( "BadSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 