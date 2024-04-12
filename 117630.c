static int config_load(void) struct ast_config * cfg ; char * cat ; struct ast_flags config_flags = { 0 } ; if ( gethostname ( ourhost , sizeof ( ourhost ) ) )  cfg = ast_config_load ( config , config_flags ); if ( ! cfg || cfg == CONFIG_STATUS_FILEINVALID )  memset ( & bindaddr , 0 , sizeof ( bindaddr ) ); cat = ast_category_browse ( cfg , "general" ); if ( ntohl ( bindaddr . sin_addr . s_addr ) )  hp = ast_gethostbyname ( ourhost , & ahp ); if ( ! hp )  cat = ast_category_browse ( cfg , "lines" ); while ( cat && strcasecmp ( cat , "general" ) && strcasecmp ( cat , "devices" ) )  config_line ( cat , ast_variable_browse ( cfg , cat ) ); cat = ast_category_browse ( cfg , cat ); static struct skinny_line *config_line(const char *lname, struct ast_variable *v) struct skinny_line * l , * temp ; struct skinny_container * container ; if ( ! ( l = skinny_line_alloc ( ) ) )  static struct skinny_line *skinny_line_alloc(void) struct skinny_line * l ; if ( ! ( l = ast_calloc ( 1 , sizeof ( * l ) ) ) )  return NULL ; l -> cap = ast_format_cap_alloc_nolock ( ); l -> confcap = ast_format_cap_alloc_nolock ( ); if ( ! l -> cap || ! l -> confcap )  return NULL ; return l ; if ( ! ( container = ast_calloc ( 1 , sizeof ( * container ) ) ) )  container -> type = SKINNY_LINECONTAINER; container -> data = l; l -> container = container; memcpy ( l , default_line , sizeof ( * default_line ) ); config_parse_variables ( TYPE_LINE , l , v ); static void config_parse_variables(int type, void *item, struct ast_variable *vptr) struct ast_variable * v ; while ( vptr )  v = vptr; vptr = vptr -> next; if ( type & ( TYPE_GENERAL ) )  if ( ! ast_jb_read_conf ( & global_jbconf , v -> name , v -> value ) )  v = v -> next; if ( ! strcasecmp ( v -> name , "bindaddr" ) )  if ( ! strcasecmp ( v -> name , "keepalive" ) )  if ( ! strcasecmp ( v -> name , "authtimeout" ) )  if ( ! strcasecmp ( v -> name , "authlimit" ) )  if ( ! strcasecmp ( v -> name , "regcontext" ) )  if ( ! strcasecmp ( v -> name , "dateformat" ) )  memcpy ( date_format , v -> value , sizeof ( date_format ) ); if ( ! strcasecmp ( v -> name , "tos" ) )  if ( ! strcasecmp ( v -> name , "tos_audio" ) )  if ( ! strcasecmp ( v -> name , "tos_video" ) )  if ( ! strcasecmp ( v -> name , "cos" ) )  if ( ! strcasecmp ( v -> name , "cos_audio" ) )  if ( ! strcasecmp ( v -> name , "cos_video" ) )  if ( ! strcasecmp ( v -> name , "bindport" ) )  if ( ! strcasecmp ( v -> name , "allow" ) )  if ( ! strcasecmp ( v -> name , "disallow" ) )  if ( ! strcasecmp ( v -> name , "transfer" ) )  if ( ! strcasecmp ( v -> name , "callwaiting" ) )  if ( ! strcasecmp ( v -> name , "directmedia" ) || ! strcasecmp ( v -> name , "canreinvite" ) )  if ( ! strcasecmp ( v -> name , "nat" ) )  if ( ! strcasecmp ( v -> name , "context" ) )  if ( ! strcasecmp ( v -> name , "vmexten" ) )  if ( ! strcasecmp ( v -> name , "mwiblink" ) )  if ( ! strcasecmp ( v -> name , "linelabel" ) )  if ( ! strcasecmp ( v -> name , "callerid" ) )  if ( ! strcasecmp ( v -> name , "amaflags" ) )  if ( ! strcasecmp ( v -> name , "regexten" ) )  if ( ! strcasecmp ( v -> name , "language" ) )  if ( ! strcasecmp ( v -> name , "accountcode" ) )  if ( ! strcasecmp ( v -> name , "mohinterpret" ) || ! strcasecmp ( v -> name , "musiconhold" ) )  if ( ! strcasecmp ( v -> name , "mohsuggest" ) )  if ( ! strcasecmp ( v -> name , "callgroup" ) )  if ( ! strcasecmp ( v -> name , "pickupgroup" ) )  if ( ! strcasecmp ( v -> name , "immediate" ) )  if ( ! strcasecmp ( v -> name , "cancallforward" ) )  if ( ! strcasecmp ( v -> name , "mailbox" ) )  if ( ! strcasecmp ( v -> name , "parkinglot" ) )  if ( ! strcasecmp ( v -> name , "hasvoicemail" ) )  if ( ! strcasecmp ( v -> name , "threewaycalling" ) )  if ( ! strcasecmp ( v -> name , "setvar" ) )  if ( ! strcasecmp ( v -> name , "earlyrtp" ) )  if ( ! strcasecmp ( v -> name , "host" ) )  if ( ! strcasecmp ( v -> name , "port" ) )  if ( ! strcasecmp ( v -> name , "device" ) )  if ( ! strcasecmp ( v -> name , "permit" ) || ! strcasecmp ( v -> name , "deny" ) )  if ( ! strcasecmp ( v -> name , "allow" ) )  if ( ! strcasecmp ( v -> name , "disallow" ) )  if ( ! strcasecmp ( v -> name , "version" ) )  if ( ! strcasecmp ( v -> name , "line" ) )  if ( type & ( TYPE_DEVICE ) )  struct skinny_line * l ; if ( ! strcasecmp ( v -> value , l -> name ) && ! l -> prune )  