static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *gonydial_blowlamp) FILE * stonesoup_files ; char * * stonesoup_str_list ; int stonesoup_num_files = 10 ; union laryngitises_mistranslated dacryopyorrhea_convertoplane ; if ( gonydial_blowlamp != 0 )  dacryopyorrhea_convertoplane . gangplank_whipstock = gonydial_blowlamp; housecleaning_shorteners = & dacryopyorrhea_convertoplane; septettes_mortice = ( ( char * ) ( * housecleaning_shorteners ) . gangplank_whipstock ); stonesoup_str_list = malloc ( sizeof ( char * ) * stonesoup_num_files ); if ( stonesoup_str_list != 0 )  stonesoup_files = fopen ( septettes_mortice , "rb" ); if ( stonesoup_files != 0 )  fclose ( stonesoup_files ); 