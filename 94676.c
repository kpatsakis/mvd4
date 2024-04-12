static int handle_callforward_button(struct skinny_subchannel *sub, int cfwdtype) struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; transmit_speaker_mode ( d , SKINNY_SPEAKERON ); static void transmit_speaker_mode(struct skinny_device *d, int mode) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct set_speaker_message ) , SET_SPEAKER_MESSAGE ) ) )  req -> data . setspeaker . mode = htolel ( mode ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  