svn_stringbuf_t *svn_stringbuf_create_from_string(const svn_string_t *str,apr_pool_t *pool) return svn_stringbuf_ncreate ( str -> data , str -> len , pool ) ; svn_stringbuf_t *svn_stringbuf_ncreate(const char *bytes,apr_size_t size,apr_pool_t *pool) svn_stringbuf_t * strbuf = svn_stringbuf_create_ensure ( size , pool ) ; svn_stringbuf_t *svn_stringbuf_create_ensure(apr_size_t blocksize,apr_pool_t *pool) void * mem ; svn_stringbuf_t * new_string ; new_string = mem; new_string -> data = ( ( char * ) mem ) + sizeof ( ( * new_string ) ); new_string -> data [ 0 ] = '\0'; new_string -> len = 0; new_string -> blocksize = blocksize - sizeof ( ( * new_string ) ); new_string -> pool = pool; return new_string ; memcpy ( ( strbuf -> data ) , bytes , size ); strbuf -> data [ size ] = '\0'; strbuf -> len = size; return strbuf ; 