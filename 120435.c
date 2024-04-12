static gboolean logcat_dump_text(wtap_dumper const struct wtap_pkthdr const guint8 *pd, int *err) gchar * buf ; gint length ; gchar priority ; const gchar * tag ; const gint * pid ; const gint * tid ; const gchar * log ; gchar * log_part ; const gchar * str_begin ; const gchar * str_end ; const guint32 * datetime ; const guint32 * nanoseconds ; const union wtap_pseudo_header * pseudo_header = & phdr -> pseudo_header ; const struct dumper_t * dumper = ( const struct dumper_t * ) wdh -> priv ; if ( phdr -> rec_type != REC_TYPE_PACKET )  if ( pseudo_header -> logcat . version == 1 )  pid = ( const gint * ) ( pd + 4 ); tid = ( const gint * ) ( pd + 2 * 4 ); datetime = ( const guint32 * ) ( pd + 3 * 4 ); nanoseconds = ( const guint32 * ) ( pd + 4 * 4 ); priority = get_priority ( ( const guint8 * ) ( pd + 5 * 4 ) ); static gchar get_priority(const guint8 *priority) static gchar priorities [ ] = "??VDIWEFS" ; if ( * priority >= ( guint8 ) sizeof ( priorities ) )  return '?' ; return priorities [ ( int ) * priority ] ; tag = ( const gchar * ) ( pd + 5 * 4 + 1 ); log = tag + strlen ( tag ) + 1; if ( pseudo_header -> logcat . version == 2 )  pid = ( const gint * ) ( pd + 4 ); tid = ( const gint * ) ( pd + 2 * 4 ); datetime = ( const guint32 * ) ( pd + 3 * 4 ); nanoseconds = ( const guint32 * ) ( pd + 4 * 4 ); priority = get_priority ( ( const guint8 * ) ( pd + 6 * 4 ) ); static gchar get_priority(const guint8 *priority) static gchar priorities [ ] = "??VDIWEFS" ; if ( * priority >= ( guint8 ) sizeof ( priorities ) )  return '?' ; return priorities [ ( int ) * priority ] ; tag = ( const char * ) ( pd + 6 * 4 + 1 ); log = tag + strlen ( tag ) + 1; str_begin = str_end = log; while ( dumper -> type != DUMP_LONG && ( str_end = strchr ( str_begin , '\n' ) ) )  log_part = ( gchar * ) g_malloc ( str_end - str_begin + 1 ); log_part [ str_end - str_begin ] = '\0'; str_begin = str_end + 1; buf = logcat_log ( dumper , * datetime , * nanoseconds / 1000000 , * pid , * tid , priority , tag , log_part ); static gchar *logcat_log(const struct dumper_t *dumper, guint32 gint microseconds, gint pid, gint tid, gchar priority, const gchar const gchar *log) gchar time_buffer [ 15 ] ; switch ( dumper -> type )  return g_strdup_printf ( "%c/%s(%5i): %s\n" , priority , tag , pid , log ) ; return g_strdup_printf ( "%c(%5i) %s  (%s)\n" , priority , pid , log , tag ) ; return g_strdup_printf ( "%c/%s: %s\n" , priority , tag , log ) ; return g_strdup_printf ( "%c(%5i:%5i) %s\n" , priority , pid , tid , log ) ; return g_strdup_printf ( "%s.%03i %c/%s(%5i): %s\n" , time_buffer , microseconds , priority , tag , pid , log ) ; return g_strdup_printf ( "%s.%03i %5i:%5i %c %s: %s\n" , time_buffer , microseconds , pid , tid , priority , tag , log ) ; return g_strdup_printf ( "[ %s.%03i %5i:%5i %c/%s ]\n%s\n\n" , time_buffer , microseconds , pid , tid , priority , tag , log ) ; return NULL ; if ( ! buf )  length = ( guint32 ) strlen ( buf ); if ( ! wtap_dump_file_write ( wdh , buf , length , err ) )  if ( * str_begin != '\0' )  log_part = ( gchar * ) g_malloc ( strlen ( str_begin ) + 1 ); g_strlcpy ( log_part , str_begin , strlen ( str_begin ) ); log_part [ strlen ( str_begin ) ] = '\0'; buf = logcat_log ( dumper , * datetime , * nanoseconds / 1000000 , * pid , * tid , priority , tag , log_part ); static gchar *logcat_log(const struct dumper_t *dumper, guint32 gint microseconds, gint pid, gint tid, gchar priority, const gchar const gchar *log) datetime = ( time_t ) seconds; switch ( dumper -> type )  return g_strdup_printf ( "%c/%s(%5i): %s\n" , priority , tag , pid , log ) ; return g_strdup_printf ( "%c(%5i) %s  (%s)\n" , priority , pid , log , tag ) ; return g_strdup_printf ( "%c/%s: %s\n" , priority , tag , log ) ; return g_strdup_printf ( "%c(%5i:%5i) %s\n" , priority , pid , tid , log ) ; strftime ( time_buffer , sizeof ( time_buffer ) , "%m-%d %H:%M:%S" , gmtime ( & datetime ) ); return g_strdup_printf ( "%s.%03i %c/%s(%5i): %s\n" , time_buffer , microseconds , priority , tag , pid , log ) ; strftime ( time_buffer , sizeof ( time_buffer ) , "%m-%d %H:%M:%S" , gmtime ( & datetime ) ); return g_strdup_printf ( "%s.%03i %5i:%5i %c %s: %s\n" , time_buffer , microseconds , pid , tid , priority , tag , log ) ; strftime ( time_buffer , sizeof ( time_buffer ) , "%m-%d %H:%M:%S" , gmtime ( & datetime ) ); return g_strdup_printf ( "[ %s.%03i %5i:%5i %c/%s ]\n%s\n\n" , time_buffer , microseconds , pid , tid , priority , tag , log ) ; if ( ! buf )  g_free ( log_part ); g_free ( log_part ); length = ( guint32 ) strlen ( buf ); if ( ! wtap_dump_file_write ( wdh , buf , length , err ) )  g_free ( buf ); wdh -> bytes_dumped += length; g_free ( buf ); 