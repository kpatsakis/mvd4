static void zlib_read(FILE_T state,unsigned char *buf,unsigned int count) int ret = 0 ; guint32 crc ; guint32 len ; z_streamp strm = & state -> strm ; unsigned char * buf2 = buf ; unsigned int count2 = count ; strm -> avail_out = count; strm -> next_out = buf; if ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in == 0 )  strm -> avail_in = state -> avail_in; strm -> next_in = state -> next_in; ret = inflate ( strm , 5 ); state -> avail_in = strm -> avail_in; state -> next_in = strm -> next_in; if ( ret == - 2 )  if ( ret == 2 )  if ( ret == - 4 )  if ( ret == - 3 )  state -> err = - 21; state -> err_info = ( strm -> msg ); strm -> adler = crc32 ( strm -> adler , buf2 , count2 - strm -> avail_out ); buf2 = buf2 + count2 - strm -> avail_out; count2 = strm -> avail_out; while ( strm -> avail_out && ret != 1 )  state -> next = buf; state -> have = count - strm -> avail_out; if ( ret == 1 )  if ( gz_next4 ( state , & crc ) != - 1 && gz_next4 ( state , & len ) != - 1 )  static int gz_next4(FILE_T state,guint32 *ret) guint32 val ; int ch ; val = ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ); val += ( ( unsigned int ) ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) ) << 8; val += ( ( guint32 ) ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) ) << 16; ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); static int fill_in_buffer(FILE_T state) if ( state -> err )  if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  static int raw_read(FILE_T state,unsigned char *buf,unsigned int count,unsigned int *have) int ret ; * have = 0; ret = ( read ( state -> fd , ( buf + * have ) , ( count - * have ) ) ); if ( ret <= 0 )  * have += ret; state -> raw_pos += ret; while ( * have < count )  if ( ret < 0 )  state -> err = * __errno_location ( ); state -> err_info = ( ( void * ) 0 ); if ( ret == 0 )  