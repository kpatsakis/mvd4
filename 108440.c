static cgiParseResultType cgiParsePostFormInput() char * input ; cgiParseResultType result ; if ( ! cgiContentLength )  input = ( char * ) malloc ( cgiContentLength ); if ( ! input )  if ( ( ( int ) fread ( input , 1 , cgiContentLength , cgiIn ) ) != cgiContentLength )  result = cgiParseFormInput ( input , cgiContentLength ); static cgiParseResultType cgiParseFormInput(char *data, int length) int pos = 0 ; cgiFormEntry * n ; while ( pos != length )  int foundEq = 0 ; int foundAmp = 0 ; int start = pos ; int len = 0 ; char * attr ; char * value ; while ( pos != length )  if ( data [ pos ] == '=' )  foundEq = 1; pos ++; pos ++; len ++; if ( ! foundEq )  if ( cgiUnescapeChars ( & attr , data + start , len ) != cgiUnescapeSuccess )  cgiUnescapeResultType cgiUnescapeChars(char **sp, char *cp, int len) char * s ; s = ( char * ) malloc ( len + 1 ); if ( ! s )  return cgiUnescapeMemory ; return cgiUnescapeSuccess ; start = pos; len = 0; while ( pos != length )  if ( data [ pos ] == '&' )  foundAmp = 1; pos ++; pos ++; len ++; if ( cgiUnescapeChars ( & value , data + start , len ) != cgiUnescapeSuccess )  cgiUnescapeResultType cgiUnescapeChars(char **sp, char *cp, int len) char * s ; s = ( char * ) malloc ( len + 1 ); if ( ! s )  return cgiUnescapeMemory ; return cgiUnescapeSuccess ; n = ( cgiFormEntry * ) malloc ( sizeof ( cgiFormEntry ) ); if ( ! n )  n -> attr = attr; n -> value = value; n -> valueLength = strlen ( n -> value ); n -> fileName = ( char * ) malloc ( 1 ); if ( ! n -> fileName )  n -> fileName [ 0 ] = '\0'; n -> contentType = ( char * ) malloc ( 1 ); if ( ! n -> contentType )  n -> contentType [ 0 ] = '\0'; n -> tfileName = ( char * ) malloc ( 1 ); if ( ! n -> tfileName )  free ( value ); if ( ! foundAmp )  