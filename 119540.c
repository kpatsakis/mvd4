struct ast_ha *CVE_2010_1224_PATCHED_ast_append_ha(const char *sense, const char *stuff, struct ast_ha *path, int *error) struct ast_ha * ha ; char * nm ; int x ; char * tmp = ast_strdupa ( stuff ) ; ha = ast_malloc ( sizeof ( * ha ) ); if ( ! ha )  nm = strchr ( tmp , '/' ); if ( ! nm )  * nm = '\0'; nm ++; if ( ! strchr ( nm , '.' ) )  if ( ( sscanf ( nm , "%30d" , & x ) == 1 ) && ( x >= 0 ) && ( x <= 32 ) )  