cgiEnvironmentResultType cgiReadEnvironment(char *filename) FILE * in ; in = fopen ( filename , "rb" ); if ( ! cgiReadString ( in , & cgiServerSoftware ) )  if ( ! cgiReadString ( in , & cgiServerName ) )  if ( ! cgiReadString ( in , & cgiGatewayInterface ) )  if ( ! cgiReadString ( in , & cgiServerProtocol ) )  if ( ! cgiReadString ( in , & cgiServerPort ) )  if ( ! cgiReadString ( in , & cgiRequestMethod ) )  if ( ! cgiReadString ( in , & cgiPathInfo ) )  if ( ! cgiReadString ( in , & cgiPathTranslated ) )  if ( ! cgiReadString ( in , & cgiScriptName ) )  if ( ! cgiReadString ( in , & cgiQueryString ) )  if ( ! cgiReadString ( in , & cgiRemoteHost ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  static int cgiReadInt(FILE *out, int *i) if ( ! fread ( i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  ( * s ) [ len ] = '\0'; 