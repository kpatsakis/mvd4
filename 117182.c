char *svn_fspath__get_longest_ancestor(const char *fspath1,const char *fspath2,apr_pool_t *result_pool) char * result ; result = apr_pstrcat ( result_pool , "/" , svn_relpath_get_longest_ancestor ( fspath1 + 1 , fspath2 + 1 , result_pool ) , ( ( char * ) ( ( void * ) 0 ) ) ); char *svn_relpath_get_longest_ancestor(const char *relpath1,const char *relpath2,apr_pool_t *pool) return apr_pstrndup ( pool , relpath1 , get_longest_ancestor_length ( type_relpath , relpath1 , relpath2 , pool ) ) ; static apr_size_t get_longest_ancestor_length(path_type_t types,const char *path1,const char *path2,apr_pool_t *pool) apr_size_t path2_len ; path2_len = strlen ( path2 ); if ( i == path1_len || i == path2_len )  if ( i == path1_len && path2 [ i ] == 47 || i == path2_len && path1 [ i ] == 47 || i == path1_len && i == path2_len )  