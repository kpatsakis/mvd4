void svn_stringbuf_insert(svn_stringbuf_t *str,apr_size_t pos,const char *bytes,apr_size_t count) if ( bytes + count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  const char * temp = ( apr_pstrndup ( str -> pool , bytes , count ) ) ; svn_stringbuf_insert ( str , pos , temp , count ); void svn_stringbuf_insert(svn_stringbuf_t *str,apr_size_t pos,const char *bytes,apr_size_t count) if ( bytes + count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  const char * temp = ( apr_pstrndup ( str -> pool , bytes , count ) ) ; svn_stringbuf_insert ( str , pos , temp , count ); void svn_stringbuf_insert(svn_stringbuf_t *str,apr_size_t pos,const char *bytes,apr_size_t count) if ( bytes + count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  svn_stringbuf_ensure ( str , str -> len + count ); void svn_stringbuf_ensure(svn_stringbuf_t *str,apr_size_t minimum_size) void * mem = ( void * ) 0 ; if ( mem && mem != ( str -> data ) )  if ( str -> data )  memcpy ( mem , ( str -> data ) , str -> len + 1 ); str -> data = mem; 