char *file_gets(char *buf,int len,FILE_T file) if ( buf == ( ( void * ) 0 ) || len < 1 )  if ( file -> err )  if ( file -> seek )  file -> seek = 0; if ( gz_skip ( file , file -> skip ) == - 1 )  static int gz_skip(FILE_T state,gint64 len) unsigned int n ; while ( len )  if ( state -> have )  n = ( ( ( gint64 ) ( state -> have ) ) > len ? ( ( unsigned int ) len ) : state -> have ); state -> have -= n; state -> next += n; state -> pos += n; len -= n; if ( state -> err )  if ( state -> eof && state -> avail_in == 0 )  if ( fill_out_buffer ( state ) == - 1 )  static int fill_out_buffer(FILE_T state) if ( state -> compression == 0 )  if ( gz_head ( state ) == - 1 )  if ( state -> have )  if ( state -> compression == 1 )  if ( raw_read ( state , state -> out , state -> size , & state -> have ) == - 1 )  static int raw_read(FILE_T state,unsigned char *buf,unsigned int count,unsigned int *have) int ret ; * have = 0; ret = ( read ( state -> fd , ( buf + * have ) , ( count - * have ) ) ); if ( ret <= 0 )  * have += ret; state -> raw_pos += ret; while ( * have < count )  if ( ret < 0 )  state -> err = * __errno_location ( ); state -> err_info = ( ( void * ) 0 ); if ( ret == 0 )  