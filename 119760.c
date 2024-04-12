static int handle_stimulus_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; int event ; int instance ; event = letohl ( req -> data . stimulus . stimulus ); instance = letohl ( req -> data . stimulus . stimulusInstance ); sub = find_subchannel_by_instance_reference ( d , d -> lastlineinstance , d -> lastcallreference ); if ( ! sub )  l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  l = sub -> line; switch ( event )  if ( l -> dnd != 0 )  l -> dnd = 1; l = find_line_by_instance ( d , instance ); if ( ! l )  d -> activeline = l; transmit_ringer_mode ( d , SKINNY_RING_OFF ); static void transmit_ringer_mode(struct skinny_device *d, int mode) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct set_ringer_message ) , SET_RINGER_MESSAGE ) ) )  req -> data . setringer . ringerMode = htolel ( mode ); req -> data . setringer . unknown1 = htolel ( 1 ); req -> data . setringer . unknown2 = htolel ( 1 ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 