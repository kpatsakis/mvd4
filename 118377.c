void hypogenetic_access(void **ioniser_leegrant) stonesoup_data = ( struct stonesoup_struct * ) malloc ( sizeof ( struct stonesoup_struct ) ); if ( stonesoup_data != NULL )  memset ( stonesoup_data -> buffer , 65 , 64 ); stonesoup_data -> buffer [ 64 - 1 ] = '\0'; stonesoup_data -> buff_pointer = stonesoup_data -> buffer; tracepoint ( stonesoup_trace , variable_buffer_info , "stonesoup_data->buffer" , strlen ( stonesoup_data -> buffer ) + 1 , stonesoup_data -> buffer , "TRIGGER-STATE" ); strncpy ( stonesoup_data -> buffer , stonesoup_source , sizeof ( stonesoup_source ) ); stonesoup_opt_var = strlen ( stonesoup_data -> buff_pointer ); for (; stonesoup_oc_i < stonesoup_opt_var; ++stonesoup_oc_i) stonesoup_data -> buffer [ stonesoup_oc_i ] = stonesoup_toupper ( stonesoup_data -> buffer [ stonesoup_oc_i ] ); int stonesoup_toupper(int c) if ( c >= 97 && c <= 122 )  return c - 32 ; return c ; stonesoup_printf ( "%s\n" , stonesoup_data -> buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_data ); 