static void goodB2G() FILE * data ; data = fopen ( "BadSource_fopen.txt" , "w+" ); CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_goodB2GSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_goodB2GSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_goodB2GSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_goodB2GSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_goodB2GSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_goodB2GSink(FILE * data) CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_goodB2GSink ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_goodB2GSink(FILE * data) if ( data != NULL )  fclose ( data ); data = fopen ( "GoodSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 