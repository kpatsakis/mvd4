svn_error_t /* UTF-8! svn_string_t /* UTF-8! const char **tmpfile_left,const char /* UTF-8! const char /* UTF-8! const svn_string_t *contents,const char *filename,apr_hash_t *config,svn_boolean_t as_text,const char *encoding,apr_pool_t *pool) svn_string_t * translated_contents ; svn_error_t * svn_err__temp = find_editor_binary ( & editor , editor_cmd , config ) ; static svn_error_t *find_editor_binary(const char **editor,const char *editor_cmd,apr_hash_t *config) const char * e ; e = editor_cmd; if ( ! e )  e = ( getenv ( "SVN_EDITOR" ) ); if ( ! e )  e = ( getenv ( "VISUAL" ) ); if ( ! e )  e = ( getenv ( "EDITOR" ) ); if ( ! e )  e = "/usr/bin/vi"; if ( e )  const char * c ; for (c = e;  *c; c++) if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * c ) ] & 0x0002 ) ) )  if ( ! ( * c ) )  return svn_error_create ( SVN_ERR_CL_NO_EXTERNAL_EDITOR , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "The EDITOR, SVN_EDITOR or VISUAL environment variable or 'editor-cmd' run-time configuration option is empty or consists solely of whitespace. Expected a shell command." ) ) ) ; return svn_error_create ( SVN_ERR_CL_NO_EXTERNAL_EDITOR , ( ( void * ) 0 ) , ( dgettext ( "subversion" , "None of the environment variables SVN_EDITOR, VISUAL or EDITOR are set, and no 'editor-cmd' run-time configuration option was found" ) ) ) ; return 0 ; if ( svn_err__temp )  while ( 0 )  if ( as_text )  const char * translated ; svn_error_t * svn_err__temp = svn_subst_translate_cstring2 ( contents -> data , & translated , "\n" , 0 , ( ( void * ) 0 ) , 0 , pool ) ; if ( svn_err__temp )  while ( 0 )  translated_contents = svn_string_create_empty ( pool ); if ( encoding )  svn_error_t * svn_err__temp = svn_utf_cstring_from_utf8_ex2 ( & translated_contents -> data , translated , encoding , pool ) ; if ( svn_err__temp )  while ( 0 )  svn_error_t * svn_err__temp = svn_utf_cstring_from_utf8 ( & translated_contents -> data , translated , pool ) ; if ( svn_err__temp )  while ( 0 )  translated_contents -> len = strlen ( translated_contents -> data ); apr_err = apr_file_write_full ( tmp_file , ( translated_contents -> data ) , translated_contents -> len , & written ); if ( ! apr_err )  if ( apr_err )  err = svn_error_wrap_apr ( apr_err , ( dgettext ( "subversion" , "Can't write to '%s'" ) ) , tmpfile_name ); if ( apr_err )  err = svn_error_wrap_apr ( apr_err , ( dgettext ( "subversion" , "Can't stat '%s'" ) ) , tmpfile_name ); if ( ! err && err2 )  return err ; 