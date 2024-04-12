static void backend_read_statsfile() if ( pgStatDBHash )  if ( IsAutoVacuumLauncherProcess ( ) )  pgStatDBHash = pgstat_read_statsfile ( ( ( Oid ) 0 ) , ( ( bool ) 0 ) ); static HTAB *pgstat_read_statsfile(Oid onlydb,bool permanent) PgStat_StatDBEntry * dbentry ; PgStat_StatDBEntry dbbuf ; PgStat_StatTabEntry tabbuf ; PgStat_StatFuncEntry funcbuf ; HASHCTL hash_ctl ; HTAB * dbhash ; HTAB * tabhash = ( ( void * ) 0 ) ; HTAB * funchash = ( ( void * ) 0 ) ; FILE * fpin ; int32 format_id ; bool found ; const char * statfile = ( permanent ? "global/pgstat.stat" : pgstat_stat_filename ) ; memset ( ( & hash_ctl ) , 0 , sizeof ( hash_ctl ) ); hash_ctl . keysize = sizeof ( Oid ); hash_ctl . entrysize = sizeof ( PgStat_StatDBEntry ); hash_ctl . hash = oid_hash; hash_ctl . hcxt = pgStatLocalContext; dbhash = hash_create ( "Databases hash" , 16 , & hash_ctl , 0x020 | 0x010 | 0x200 ); globalStats . stat_reset_timestamp = GetCurrentTimestamp ( ); if ( ( fpin = AllocateFile ( statfile , "r" ) ) == ( ( void * ) 0 ) )  if ( fread ( ( & format_id ) , 1 , sizeof ( format_id ) , fpin ) != sizeof ( format_id ) || format_id != 0x01A5BC9A )  if ( fread ( ( & globalStats ) , 1 , sizeof ( globalStats ) , fpin ) != sizeof ( globalStats ) )  switch ( fgetc ( fpin ) )  if ( fread ( ( & dbbuf ) , 1 , ( ( size_t ) ( & ( ( PgStat_StatDBEntry * ) 0 ) -> tables ) ) , fpin ) != ( ( size_t ) ( & ( ( PgStat_StatDBEntry * ) 0 ) -> tables ) ) )  dbentry = ( ( PgStat_StatDBEntry * ) ( hash_search ( dbhash , ( ( void * ) ( & dbbuf . databaseid ) ) , HASH_ENTER , & found ) ) ); if ( found )  memcpy ( dbentry , ( & dbbuf ) , sizeof ( PgStat_StatDBEntry ) ); dbentry -> tables = ( ( void * ) 0 ); dbentry -> functions = ( ( void * ) 0 ); if ( onlydb != ( ( Oid ) 0 ) )  if ( dbbuf . databaseid != onlydb && dbbuf . databaseid != ( ( Oid ) 0 ) )  memset ( ( & hash_ctl ) , 0 , sizeof ( hash_ctl ) ); hash_ctl . keysize = sizeof ( Oid ); hash_ctl . entrysize = sizeof ( PgStat_StatTabEntry ); hash_ctl . hash = oid_hash; hash_ctl . hcxt = pgStatLocalContext; dbentry -> tables = hash_create ( "Per-database table" , 512 , & hash_ctl , 0x020 | 0x010 | 0x200 ); hash_ctl . keysize = sizeof ( Oid ); hash_ctl . entrysize = sizeof ( PgStat_StatFuncEntry ); hash_ctl . hash = oid_hash; hash_ctl . hcxt = pgStatLocalContext; dbentry -> functions = hash_create ( "Per-database function" , 512 , & hash_ctl , 0x020 | 0x010 | 0x200 ); tabhash = dbentry -> tables; funchash = dbentry -> functions; tabhash = ( ( void * ) 0 ); funchash = ( ( void * ) 0 ); if ( fread ( ( & tabbuf ) , 1 , sizeof ( PgStat_StatTabEntry ) , fpin ) != sizeof ( PgStat_StatTabEntry ) )  if ( tabhash == ( ( void * ) 0 ) )  if ( found )  if ( fread ( ( & funcbuf ) , 1 , sizeof ( PgStat_StatFuncEntry ) , fpin ) != sizeof ( PgStat_StatFuncEntry ) )  if ( funchash == ( ( void * ) 0 ) )  if ( found )  