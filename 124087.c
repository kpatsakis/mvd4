void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_bad() FILE * data ; data = fopen ( "BadSource_fopen.txt" , "w+" ); CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_badSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_badSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_badSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_badSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_badSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_badSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_badSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_badSink(FILE * data) data = fopen ( "BadSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 