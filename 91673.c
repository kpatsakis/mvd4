void pgstat_report_recovery_conflict(int reason) PgStat_MsgRecoveryConflict msg ; if ( pgStatSock == - 1 || ! pgstat_track_counts )  msg . m_databaseid = MyDatabaseId; msg . m_reason = reason; pgstat_send ( ( & msg ) , ( sizeof ( msg ) ) ); static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  