struct ast_ha *CVE_2010_1224_VULN_ast_append_ha(const char *sense, const char *stuff, struct ast_ha *path, int *error) struct ast_ha * ha ; char * nm ; char * tmp = ast_strdupa ( stuff ) ; ha = ast_malloc ( sizeof ( * ha ) ); if ( ! ha )  nm = strchr ( tmp , '/' ); if ( ! nm )  * nm = '\0'; nm ++; if ( ! strchr ( nm , '.' ) )  