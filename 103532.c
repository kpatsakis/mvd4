static void goodB2G() FILE * data ; data = fopen ( "BadSource_fopen.txt" , "w+" ); baseObject -> action ( data ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_82_goodB2G::action(FILE * data) if ( data != NULL )  fclose ( data ); data = fopen ( "GoodSink_fopen.txt" , "w+" ); if ( data != NULL )  fclose ( data ); 