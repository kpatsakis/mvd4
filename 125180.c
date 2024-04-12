static void *skinny_ss(void *data) struct ast_channel * c = data ; struct skinny_subchannel * sub = c -> tech_pvt ; struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; int timeout = firstdigittimeout ; int loop_pause = 100 ; len = strlen ( sub -> exten ); while ( len < AST_MAX_EXTENSION - 1 )  res = 1; while ( strlen ( sub -> exten ) == len )  timeout -= loop_pause; if ( ( timeout -= loop_pause ) <= 0 )  res = 0; res = 1; if ( sub != l -> activesub )  timeout = 0; len = strlen ( sub -> exten ); if ( ! ast_ignore_pattern ( c -> context , sub -> exten ) )  transmit_stop_tone ( d , l -> instance , sub -> callid ); if ( ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( ! res || ! ast_matchmore_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  timeout = matchdigittimeout; if ( res == 0 )  if ( ! ast_canmatch_extension ( c , c -> context , sub -> exten , 1 , S_COR ( c -> caller . id . number . valid , c -> caller . id . number . str , NULL ) ) && ( ( sub -> exten [ 0 ] != '*' ) || ( ! ast_strlen_zero ( sub -> exten ) > 2 ) ) )  if ( ! timeout )  timeout = gendigittimeout; static void transmit_stop_tone(struct skinny_device *d, int instance, int reference) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct stop_tone_message ) , STOP_TONE_MESSAGE ) ) )  req -> data . stoptone . instance = htolel ( instance ); req -> data . stoptone . reference = htolel ( reference ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 