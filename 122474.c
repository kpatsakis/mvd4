unsigned int gzwfile_write(GZWFILE_T state,const void *buf,unsigned int len) z_streamp strm ; strm = & state -> strm; if ( state -> err != 0 )  if ( len == 0 )  if ( state -> size == 0 && gz_init ( state ) == - 1 )  if ( len < state -> size )  if ( strm -> avail_in && gz_comp ( state , 0 ) == - 1 )  static int gz_comp(GZWFILE_T state,int flush) int ret ; int got ; unsigned int have ; z_streamp strm = & state -> strm ; if ( state -> size == 0 && gz_init ( state ) == - 1 )  ret = 0; if ( strm -> avail_out == 0 || flush != 0 && ( flush != 4 || ret == 1 ) )  have = ( ( unsigned int ) ( strm -> next_out - state -> next ) ); if ( have )  got = ( write ( state -> fd , ( state -> next ) , have ) ); if ( got < 0 )  if ( ( ( unsigned int ) got ) != have )  state -> err = - 14; if ( strm -> avail_out == 0 )  strm -> avail_out = state -> size; strm -> next_out = state -> out; state -> next = strm -> next_out; have = strm -> avail_out; ret = deflate ( strm , flush ); if ( ret == - 2 )  have -= strm -> avail_out; while ( have )  