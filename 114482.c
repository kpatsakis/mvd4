void initlinedraw(int flag) char * aforeward_loyolite ; if ( __sync_bool_compare_and_swap ( & overhumanizing_apodes , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( aforeward_loyolite != 0 )  dbhost = getenv ( "DBPGHOST" ); tracepoint ( stonesoup_trace , variable_buffer , "dbhost" , dbhost , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); vfprintf ( stonesoup_printf_context , format , argptr ); PQclear ( res ); PQfinish ( conn ); 