static void PgstatCollectorMain(int argc,char *argv[]) pgstat_write_statsfile ( ( ( bool ) 1 ) ); static void pgstat_write_statsfile(bool permanent) PgStat_StatDBEntry * dbentry ; FILE * fpout ; const char * tmpfile = ( permanent ? "global/pgstat.tmp" : pgstat_stat_tmpname ) ; fpout = AllocateFile ( tmpfile , "w" ); if ( fpout == ( ( void * ) 0 ) )  while ( ( dbentry = ( ( PgStat_StatDBEntry * ) ( hash_seq_search ( & hstat ) ) ) ) != ( ( void * ) 0 ) )  fputc ( 100 , fpout ); 