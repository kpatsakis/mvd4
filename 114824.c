static int config_load(void) struct ast_config * cfg ; struct ast_flags config_flags = { 0 } ; if ( gethostname ( ourhost , sizeof ( ourhost ) ) )  cfg = ast_config_load ( config , config_flags ); if ( ! cfg || cfg == CONFIG_STATUS_FILEINVALID )  memset ( & bindaddr , 0 , sizeof ( bindaddr ) ); memset ( & default_prefs , 0 , sizeof ( default_prefs ) ); if ( ntohl ( bindaddr . sin_addr . s_addr ) )  hp = ast_gethostbyname ( ourhost , & ahp ); if ( ! hp )  default_line -> confprefs = default_prefs; config_parse_variables ( TYPE_DEF_LINE , default_line , ast_variable_browse ( cfg , "lines" ) ); static void config_parse_variables(int type, void *item, struct ast_variable *vptr) struct ast_variable * v ; int speeddialInstance = 1 ; while ( vptr )  v = vptr; vptr = vptr -> next; if ( type & ( TYPE_GENERAL ) )  char newcontexts [ AST_MAX_CONTEXT ] ; char * stringp , * context , * oldregcontext ; if ( ! ast_jb_read_conf ( & global_jbconf , v -> name , v -> value ) )  v = v -> next; if ( ! strcasecmp ( v -> name , "bindaddr" ) )  if ( ! strcasecmp ( v -> name , "keepalive" ) )  if ( ! strcasecmp ( v -> name , "authtimeout" ) )  if ( ! strcasecmp ( v -> name , "authlimit" ) )  if ( ! strcasecmp ( v -> name , "regcontext" ) )  stringp = newcontexts; while ( context = strsep ( & stringp , "&" ) )  if ( ! strcasecmp ( v -> name , "dateformat" ) )  if ( ! strcasecmp ( v -> name , "tos" ) )  if ( ! strcasecmp ( v -> name , "tos_audio" ) )  if ( ! strcasecmp ( v -> name , "tos_video" ) )  if ( ! strcasecmp ( v -> name , "cos" ) )  if ( ! strcasecmp ( v -> name , "cos_audio" ) )  if ( ! strcasecmp ( v -> name , "cos_video" ) )  if ( ! strcasecmp ( v -> name , "bindport" ) )  if ( ! strcasecmp ( v -> name , "allow" ) )  if ( ! strcasecmp ( v -> name , "disallow" ) )  if ( ! strcasecmp ( v -> name , "transfer" ) )  if ( ! strcasecmp ( v -> name , "callwaiting" ) )  if ( ! strcasecmp ( v -> name , "directmedia" ) || ! strcasecmp ( v -> name , "canreinvite" ) )  if ( ! strcasecmp ( v -> name , "nat" ) )  if ( ! strcasecmp ( v -> name , "context" ) )  if ( ! strcasecmp ( v -> name , "vmexten" ) )  if ( ! strcasecmp ( v -> name , "mwiblink" ) )  if ( ! strcasecmp ( v -> name , "linelabel" ) )  if ( ! strcasecmp ( v -> name , "callerid" ) )  if ( ! strcasecmp ( v -> name , "amaflags" ) )  if ( ! strcasecmp ( v -> name , "regexten" ) )  if ( ! strcasecmp ( v -> name , "language" ) )  if ( ! strcasecmp ( v -> name , "accountcode" ) )  if ( ! strcasecmp ( v -> name , "mohinterpret" ) || ! strcasecmp ( v -> name , "musiconhold" ) )  if ( ! strcasecmp ( v -> name , "mohsuggest" ) )  if ( ! strcasecmp ( v -> name , "callgroup" ) )  if ( ! strcasecmp ( v -> name , "pickupgroup" ) )  if ( ! strcasecmp ( v -> name , "immediate" ) )  if ( ! strcasecmp ( v -> name , "cancallforward" ) )  if ( ! strcasecmp ( v -> name , "mailbox" ) )  if ( ! strcasecmp ( v -> name , "parkinglot" ) )  if ( ! strcasecmp ( v -> name , "hasvoicemail" ) )  if ( ! strcasecmp ( v -> name , "threewaycalling" ) )  if ( ! strcasecmp ( v -> name , "setvar" ) )  if ( ! strcasecmp ( v -> name , "earlyrtp" ) )  if ( ! strcasecmp ( v -> name , "host" ) )  if ( ! strcasecmp ( v -> name , "port" ) )  if ( ! strcasecmp ( v -> name , "device" ) )  if ( ! strcasecmp ( v -> name , "permit" ) || ! strcasecmp ( v -> name , "deny" ) )  if ( ! strcasecmp ( v -> name , "allow" ) )  if ( ! strcasecmp ( v -> name , "disallow" ) )  if ( ! strcasecmp ( v -> name , "version" ) )  if ( ! strcasecmp ( v -> name , "line" ) )  if ( type & ( TYPE_DEVICE ) )  struct skinny_line * l ; if ( ! strcasecmp ( v -> value , l -> name ) && ! l -> prune )  if ( ! strcasecmp ( v -> name , "subline" ) )  if ( type & ( TYPE_LINE ) )  struct skinny_subline * subline ; struct skinny_container * container ; if ( ! ( subline = ast_calloc ( 1 , sizeof ( * subline ) ) ) )  if ( ! ( container = ast_calloc ( 1 , sizeof ( * container ) ) ) )  subline -> line = CLINE; subline -> sub = NULL; container -> type = SKINNY_SUBLINECONTAINER; container -> data = subline; subline -> container = container; if ( ! strcasecmp ( v -> name , "dialoutcontext" ) )  if ( ! strcasecmp ( v -> name , "dialoutexten" ) )  if ( ! strcasecmp ( v -> name , "speeddial" ) )  if ( type & ( TYPE_DEVICE ) )  struct skinny_speeddial * sd ; struct skinny_container * container ; if ( ! ( sd = ast_calloc ( 1 , sizeof ( * sd ) ) ) )  if ( ! ( container = ast_calloc ( 1 , sizeof ( * container ) ) ) )  exten = strsep ( & stringp , "," ); if ( context = strchr ( exten , '@' ) )  * context ++ = '\0'; if ( ! ast_strlen_zero ( context ) )  ast_copy_string ( sd -> context , context , sizeof ( sd -> context ) ); sd -> isHint = 0; sd -> instance = speeddialInstance ++; sd -> context [ 0 ] = '\0'; sd -> parent = CDEV; container -> type = SKINNY_SDCONTAINER; container -> data = sd; sd -> container = container; 