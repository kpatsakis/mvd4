int main(int argc, char *argv[]) if ( argc > 1 )  printLine ( argv [ 1 ] ); void printLine(const char *fileName) FILE * fp ; if ( allowed ( fileName ) )  int allowed(const char *_str) unsigned i ; for (i = 0; i < sizeof(whitelist)/sizeof(*whitelist); i++) if ( ! strcmp ( whitelist [ i ] , _str ) )  return 1 ; return 0 ; if ( fp = fopen ( fileName , "r" ) )  fclose ( fp ); 