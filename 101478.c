char *svn_dirent_join_many(apr_pool_t *pool,const char *base,... ) apr_size_t total_len ; total_len = strlen ( base ); if ( total_len == 0 || base [ total_len - 1 ] == 47 )  saved_lengths [ 0 ] = total_len; saved_lengths [ nargs ] = len; base_arg = nargs; saved_lengths [ 0 ] = 0; if ( nargs <= base_arg + 1 )  total_len += add_separator + len; total_len += 1 + len; if ( add_separator == 0 && total_len == 1 )  dirent = p = ( apr_palloc ( pool , total_len + 1 ) ); memcpy ( p , base , len = saved_lengths [ 0 ] ); p += len; if ( ++ nargs < base_arg )  if ( nargs < 10 )  len = saved_lengths [ nargs ]; if ( p != dirent && ( ! ( nargs - 1 <= base_arg ) || add_separator ) )  * ( p ++ ) = 47; memcpy ( p , s , len ); p += len; * p = '\0'; ( ( apr_size_t ) ( p - dirent ) ) == total_len ? ( ( void ) 0 ) : __assert_fail ( "(apr_size_t)(p - dirent) == total_len" , "dirent_uri.c" , 1164 , __PRETTY_FUNCTION__ ); return dirent ; 