gchar **ep_strsplit(const gchar *string,const gchar *sep,int max_tokens) guint sep_len ; if ( ! string || ! sep || ! sep [ 0 ] )  sep_len = ( ( guint ) ( strlen ( sep ) ) ); while ( tokens <= ( ( guint ) max_tokens ) && ( s = strstr ( s , sep ) ) )  for (i = 0; i < sep_len; i++) s [ i ] = '\0'; s += sep_len; for (i = 0; i < str_len; i++) switch ( splitted [ i ] )  vec [ curr_tok ] = & splitted [ i ]; curr_tok ++; switch ( splitted [ i ] )  switch ( splitted [ i ] )  vec [ curr_tok ] = & splitted [ i ]; curr_tok ++; vec [ curr_tok ] = ( ( void * ) 0 ); return vec ; 