static void *CVE_2014_2286_PATCHED_httpd_helper_thread(void *data) char buf [ 4096 ] ; char header_line [ 4096 ] ; struct ast_tcptls_session_instance * ser = data ; struct ast_variable * headers = NULL ; struct ast_variable * tail = headers ; char * uri , * method ; int remaining_headers ; if ( ast_atomic_fetchadd_int ( & session_count , + 1 ) >= session_limit )  if ( ! fgets ( buf , sizeof ( buf ) , ser -> f ) )  method = ast_skip_blanks ( buf ); uri = ast_skip_nonblanks ( method ); if ( * uri )  * uri ++ = '\0'; uri = ast_skip_blanks ( uri ); if ( * uri )  remaining_headers = MAX_HTTP_REQUEST_HEADERS; while ( fgets ( header_line , sizeof ( header_line ) , ser -> f ) )  char * name , * value ; ast_trim_blanks ( header_line ); if ( ast_strlen_zero ( header_line ) )  value = header_line; name = strsep ( & value , ":" ); if ( ! value )  value = ast_skip_blanks ( value ); if ( ast_strlen_zero ( value ) || ast_strlen_zero ( name ) )  if ( ! remaining_headers -- )  if ( ! headers )  headers = ast_variable_new ( name , value , __FILE__ ); tail = headers; tail -> next = ast_variable_new ( name , value , __FILE__ ); tail = tail -> next; if ( ! tail )  