static char *CVE_2008_1390_VULN_generic_http_callback(int format, struct sockaddr_in *requestor, const char *uri, struct ast_variable *params, int *status, char **title, int *contentlength) unsigned long ident = 0 ; struct ast_variable * v ; for (v = params; v; v = v->next) if ( ! strcasecmp ( v -> name , "mansession_id" ) )  if ( ! ( s = find_session ( ident ) ) )  if ( ! ( s = ast_calloc ( 1 , sizeof ( * s ) ) ) )  memcpy ( & s -> sin , requestor , sizeof ( s -> sin ) ); s -> fd = - 1; s -> waiting_thread = AST_PTHREADT_NULL; s -> send_events = 0; s -> inuse = 1; s -> managerid = rand ( ) | ( unsigned long ) s; s -> eventq = master_eventq; while ( s -> eventq -> next )  s -> eventq = s -> eventq -> next; if ( ! s -> authenticated && ( httptimeout > 5 ) )  s -> sessiontimeout += httptimeout; if ( s )  struct message m = { 0 } ; unsigned int x ; size_t hdrlen ; for (x = 0, v = params; v && (x < AST_MAX_MANHEADERS); x++, v = v->next) hdrlen = strlen ( v -> name ) + strlen ( v -> value ) + 3; m . headers [ m . hdrcount ] = alloca ( hdrlen ); snprintf ( ( char * ) m . headers [ m . hdrcount ] , hdrlen , "%s: %s" , v -> name , v -> value ); m . hdrcount = x + 1; if ( process_message ( s , & m ) )  