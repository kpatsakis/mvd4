static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *redeprive_wetters) unsigned int * * stonesoup_buffer_array = 0 ; unsigned int stonesoup_i ; unsigned int stonesoup_size ; int stonesoup_num ; int spaework_hemostats ; paraxial_becrawled interglyph_hinter [ 10 ] = { 0 } ; if ( redeprive_wetters != 0 )  sasan_steppenwolf = redeprive_wetters; interglyph_hinter [ 5 ] = sasan_steppenwolf; spaework_hemostats = 5; tortulaceous_dorsomedian = & spaework_hemostats; monas_eyewashes = * ( interglyph_hinter + * tortulaceous_dorsomedian ); weldment_mayorality = ( ( char * ) monas_eyewashes ); stonesoup_num = atoi ( weldment_mayorality ); if ( stonesoup_num > 0 && stonesoup_num < 4294967295U / sizeof ( unsigned int * * ) )  stonesoup_size = 100000; stonesoup_buffer_array = ( ( unsigned int * * ) ( malloc ( stonesoup_num * sizeof ( unsigned int * ) ) ) ); for (stonesoup_i = 0; stonesoup_i < stonesoup_num; ++stonesoup_i) stonesoup_buffer_array [ stonesoup_i ] = 0; while ( stonesoup_buffer_array [ stonesoup_i ] == 0 )  stonesoup_buffer_array [ stonesoup_i ] = ( ( unsigned int * ) ( malloc ( stonesoup_size * sizeof ( unsigned int ) ) ) ); if ( stonesoup_buffer_array [ stonesoup_i ] != 0 )  for (stonesoup_i = 0; stonesoup_i < stonesoup_num; ++stonesoup_i) if ( stonesoup_buffer_array [ stonesoup_i ] != 0 )  free ( stonesoup_buffer_array [ stonesoup_i ] ); 