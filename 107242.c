int opt_report(const char *opt) return init_report ( ( ( void * ) 0 ) ) ; static int init_report(const char *env) char * key ; int ret ; if ( report_file )  while ( env && * env )  if ( ( ret = av_opt_get_key_value ( & env , "=" , ":" , 0 , & key , & val ) ) < 0 )  if ( * env )  env ++; if ( ! strcmp ( key , "file" ) )  