void monmouthite_quadruplicating(int spanless_overright,ray_inexplicitness heavyheaded_unproscriptive) spanless_overright --; if ( spanless_overright > 0 )  monmouthite_quadruplicating ( spanless_overright , heavyheaded_unproscriptive ); void monmouthite_quadruplicating(int spanless_overright,ray_inexplicitness heavyheaded_unproscriptive) spanless_overright --; if ( spanless_overright > 0 )  monmouthite_quadruplicating ( spanless_overright , heavyheaded_unproscriptive ); void monmouthite_quadruplicating(int spanless_overright,ray_inexplicitness heavyheaded_unproscriptive) spanless_overright --; if ( spanless_overright > 0 )  monmouthite_quadruplicating ( spanless_overright , heavyheaded_unproscriptive ); void monmouthite_quadruplicating(int spanless_overright,ray_inexplicitness heavyheaded_unproscriptive) spanless_overright --; if ( spanless_overright > 0 )  dbpassword = getenv ( "DBPGPASSWORD" ); tracepoint ( stonesoup_trace , variable_buffer , "dbpassword" , dbpassword , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != 2 )  stonesoup_printf ( "%s: %s\n" , "SELECT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_nFields = PQnfields ( res ); for (stonesoup_i = 0; stonesoup_i < stonesoup_nFields; stonesoup_i++) stonesoup_printf ( "%-15s" , PQfname ( res , stonesoup_i ) ); for (stonesoup_i = 0; stonesoup_i < PQntuples(res); stonesoup_i++) for (stonesoup_j = 0; stonesoup_j < stonesoup_nFields; stonesoup_j++) stonesoup_printf ( "%-15s" , PQgetvalue ( res , stonesoup_i , stonesoup_j ) ); PQclear ( res ); PQfinish ( conn ); 