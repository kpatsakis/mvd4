void show_banner(int argc,char **argv,const OptionDef *options) int idx = locate_option ( argc , argv , options , "version" ) ; int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; for (i = 1; i < argc; i++) const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; if ( idx )  print_all_libs_info ( 1 | 4 , 32 ); static void print_all_libs_info(int flags,int level) if ( 1 )  if ( flags & 4 )  const char * cfg = avutil_configuration ( ) ; if ( strcmp ( "--prefix=/opt/stonesoup/workspace/install --enable-pic --disable-static --enable-shared --disable-yasm --disable-doc --enable-pthreads --disable-w32threads --disable-os2threads --enable-zlib --enable-openssl --disable-asm --extra-cflags= --extra-ldflags= --extra-libs=-ldl" , cfg ) )  