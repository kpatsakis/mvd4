void svn_stringbuf_appendbyte(svn_stringbuf_t *str,char byte) apr_size_t old_len = str -> len ; if ( str -> blocksize > old_len + 1 )  str -> len = old_len + 1; svn_stringbuf_appendbytes ( str , ( & b ) , 1 ); void svn_stringbuf_appendbytes(svn_stringbuf_t *str,const char *bytes,apr_size_t count) apr_size_t total_len ; total_len = str -> len + count; svn_stringbuf_ensure ( str , total_len ); void svn_stringbuf_ensure(svn_stringbuf_t *str,apr_size_t minimum_size) void * mem = ( void * ) 0 ; if ( mem && mem != ( str -> data ) )  if ( str -> data )  memcpy ( mem , ( str -> data ) , str -> len + 1 ); str -> data = mem; 