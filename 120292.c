static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *paganically_synchronal) unsigned int stonesoup_size_buffer ; int stonesoup_buffer_value ; int advoyer_babeship ; char * * eas_predoubtful [ 10 ] = { 0 } ; char * malacopod_bemoaned [ 79 ] = { 0 } ; if ( paganically_synchronal != 0 )  malacopod_bemoaned [ 24 ] = paganically_synchronal; eas_predoubtful [ 5 ] = malacopod_bemoaned; advoyer_babeship = 5; pentasyllabism_aegir = & advoyer_babeship; hyperosmic_spillikins = * ( eas_predoubtful + * pentasyllabism_aegir ); subthreshold_tis = ( ( char * ) hyperosmic_spillikins [ 24 ] ); stonesoup_buffer_value = atoi ( subthreshold_tis ); if ( stonesoup_buffer_value < 0 )  stonesoup_buffer_value = 0; stonesoup_size_buffer = ( ( unsigned int ) stonesoup_buffer_value ); stonesoup_malloc_buffer = my_malloc ( stonesoup_size_buffer ); void *my_malloc(unsigned int size) if ( size > 512 )  return malloc ( size ) ; 