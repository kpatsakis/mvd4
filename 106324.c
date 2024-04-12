static int skinny_extensionstate_cb(const char *context, const char *exten, enum ast_extension_states state, void *data) struct skinny_container * container = data ; if ( container -> type == SKINNY_SDCONTAINER )  if ( container -> type == SKINNY_SUBLINECONTAINER )  struct skinny_subline * subline = container -> data ; struct skinny_line * l = subline -> line ; d = l -> device; subline -> extenstate = state; if ( subline -> callid == 0 )  switch ( state )  if ( subline -> sub && ( subline -> sub -> substate == SKINNY_CONNECTED ) )  transmit_displaypromptstatus ( d , "In Use" , 0 , l -> instance , subline -> callid ); static void transmit_displaypromptstatus(struct skinny_device *d, const char *text, int t, int instance, int callid) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct display_prompt_status_message ) , DISPLAY_PROMPT_STATUS_MESSAGE ) ) )  req -> data . displaypromptstatus . messageTimeout = htolel ( t ); req -> data . displaypromptstatus . lineInstance = htolel ( instance ); req -> data . displaypromptstatus . callReference = htolel ( callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  