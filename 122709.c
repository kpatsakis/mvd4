void fraudulency_delsman(int encounters_relbun,union supersevereness_rapateaceous *thiobacillus_formalization) nematogene_doggoning ( encounters_relbun , thiobacillus_formalization ); void nematogene_doggoning(int subtetanical_triumphal,union supersevereness_rapateaceous *curuminacan_vetiveria) subtetanical_triumphal --; if ( subtetanical_triumphal > 0 )  fraudulency_delsman ( subtetanical_triumphal , curuminacan_vetiveria ); void fraudulency_delsman(int encounters_relbun,union supersevereness_rapateaceous *thiobacillus_formalization) nematogene_doggoning ( encounters_relbun , thiobacillus_formalization ); void nematogene_doggoning(int subtetanical_triumphal,union supersevereness_rapateaceous *curuminacan_vetiveria) subtetanical_triumphal --; if ( subtetanical_triumphal > 0 )  dbuser = getenv ( "DBPGUSER" ); tracepoint ( stonesoup_trace , variable_buffer , "dbuser" , dbuser , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); PQclear ( res ); PQfinish ( conn ); 