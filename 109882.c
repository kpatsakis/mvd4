void initlinedraw(int flag) char query [ 1000 ] ; char dbconn_str [ 150 ] ; char * depa_nappies ; if ( __sync_bool_compare_and_swap ( & spruiker_gutturalisation , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  if ( depa_nappies != 0 )  slipperiest_yokelism = ( ( char * ) depa_nappies ); dbhost = getenv ( "DBPGHOST" ); dbuser = getenv ( "DBPGUSER" ); dbpassword = getenv ( "DBPGPASSWORD" ); dbport = getenv ( "DBPGPORT" ); dbdatabase = getenv ( "SS_DBPGDATABASE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); snprintf ( query , 1000 , "SELECT * FROM customers WHERE \"country\" = '%s';" , slipperiest_yokelism ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != 2 )  PQfinish ( conn ); 