void survivors_madawaska(struct mustelus_dillon arbalister_collagist) unsigned int stonesoup_num_files ; FILE * * stonesoup_filearray ; snaffled_falcidian = ( ( char * ) arbalister_collagist . festucous_mayotte ); if ( strlen ( snaffled_falcidian ) > 0 && snaffled_falcidian [ 0 ] == '-' )  stonesoup_num_files = strtoul ( snaffled_falcidian , 0 , 16 ); if ( stonesoup_num_files > 0xffff )  stonesoup_num_files = 0; stonesoup_filearray = ( ( FILE * * ) ( malloc ( stonesoup_num_files * sizeof ( FILE * ) ) ) ); if ( stonesoup_filearray != 0 )  stonesoup_filearray [ stonesoup_i ] = 0; for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) snprintf ( stonesoup_filename , filename_len , "%s_%08x" , "/opt/stonesoup/workspace/testData/temp" , stonesoup_i ); stonesoup_filearray [ stonesoup_i ] = stonesoup_open_file ( stonesoup_filename ); FILE *stonesoup_open_file(char *filename_param) f = fopen ( filename_param , "w" ); if ( ! f )  return f ; if ( stonesoup_filearray [ stonesoup_i ] == 0 )  if ( stonesoup_filearray [ stonesoup_i ] != 0 )  fclose ( stonesoup_filearray [ stonesoup_i ] ); free ( stonesoup_filearray ); 