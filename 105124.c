void thysanura_uncandor(struct anchorable_curelessness serositis_testatrices) unsigned int stonesoup_num_files ; FILE * * stonesoup_filearray ; paraebius_inapprehensibly = ( ( char * ) serositis_testatrices . jochbed_commemorable ); if ( strlen ( paraebius_inapprehensibly ) > 0 && paraebius_inapprehensibly [ 0 ] == '-' )  stonesoup_num_files = strtoul ( paraebius_inapprehensibly , 0 , 16 ); if ( stonesoup_num_files > 0xffff )  stonesoup_num_files = 0; stonesoup_filearray = ( ( FILE * * ) ( malloc ( stonesoup_num_files * sizeof ( FILE * ) ) ) ); if ( stonesoup_filearray != 0 )  stonesoup_filearray [ stonesoup_i ] = 0; for (stonesoup_i = 0; stonesoup_i < stonesoup_num_files; ++stonesoup_i) snprintf ( stonesoup_filename , filename_len , "%s_%08x" , "/opt/stonesoup/workspace/testData/temp" , stonesoup_i ); stonesoup_filearray [ stonesoup_i ] = stonesoup_open_file ( stonesoup_filename ); FILE *stonesoup_open_file(char *filename_param) f = fopen ( filename_param , "w" ); if ( ! f )  return f ; if ( stonesoup_filearray [ stonesoup_i ] == 0 )  if ( stonesoup_filearray [ stonesoup_i ] != 0 )  fclose ( stonesoup_filearray [ stonesoup_i ] ); free ( stonesoup_filearray ); 