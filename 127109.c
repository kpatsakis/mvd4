svn_error_t *svn_error_abort_on_malfunction(svn_boolean_t can_return,const char *file,int line,const char *expr) svn_error_t * err = svn_error_raise_on_malfunction ( ! 0 , file , line , expr ) ; svn_error_t *svn_error_raise_on_malfunction(svn_boolean_t can_return,const char *file,int line,const char *expr) if ( expr )  return svn_error_createf ( SVN_ERR_ASSERTION_FAIL , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "In file '%s' line %d: assertion failed (%s)" ) ) , file , line , expr ) ; svn_error_t *svn_error_createf(apr_status_t apr_err,svn_error_t *child,const char *fmt,... ) svn_error_t * err ; va_list ap ; err = make_error_internal ( apr_err , child ); static svn_error_t *make_error_internal(apr_status_t apr_err,svn_error_t *child) apr_pool_t * pool ; svn_error_t * new_error ; if ( child )  pool = child -> pool; new_error = ( memset ( apr_palloc ( pool , sizeof ( ( * new_error ) ) ) , 0 , sizeof ( ( * new_error ) ) ) ); new_error -> apr_err = apr_err; new_error -> child = child; new_error -> pool = pool; return new_error ; err -> message = ( apr_pvsprintf ( err -> pool , fmt , ap ) ); return err ; return svn_error_createf ( SVN_ERR_ASSERTION_FAIL , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "In file '%s' line %d: internal malfunction" ) ) , file , line ) ; svn_error_t *svn_error_createf(apr_status_t apr_err,svn_error_t *child,const char *fmt,... ) svn_error_t * err ; va_list ap ; err = make_error_internal ( apr_err , child ); err -> message = ( apr_pvsprintf ( err -> pool , fmt , ap ) ); return err ; svn_handle_error2 ( err , stderr , 0 , "svn: " ); void svn_handle_error2(svn_error_t *err,FILE *stream,svn_boolean_t fatal,const char *prefix) apr_pool_t * subpool ; apr_array_header_t * empties ; svn_error_t * tmp_err ; empties = apr_array_make ( subpool , 0 , ( sizeof ( apr_status_t ) ) ); tmp_err = err; while ( tmp_err )  svn_boolean_t printed_already = 0 ; if ( ! tmp_err -> message )  int i ; for (i = 0; i < empties -> nelts; i++) if ( tmp_err -> apr_err == ( ( apr_status_t * ) ( empties -> elts ) ) [ i ] )  printed_already = ! 0; if ( ! printed_already )  print_error ( tmp_err , stream , prefix ); tmp_err = tmp_err -> child; static void print_error(svn_error_t *err,FILE *stream,const char *prefix) if ( svn_error__is_tracing_link ( err ) )  svn_boolean_t svn_error__is_tracing_link(svn_error_t *err) return err && err -> message && ! strcmp ( err -> message , error_tracing_link ) ; 