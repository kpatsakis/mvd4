static int handle_stimulus_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; struct ast_channel * c ; int event ; int instance ; event = letohl ( req -> data . stimulus . stimulus ); instance = letohl ( req -> data . stimulus . stimulusInstance ); sub = find_subchannel_by_instance_reference ( d , d -> lastlineinstance , d -> lastcallreference ); if ( ! sub )  l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  sub = l -> activesub; l = sub -> line; switch ( event )  struct skinny_speeddial * sd ; if ( ! ( sd = find_speeddial_by_instance ( d , instance , 0 ) ) )  if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l = find_line_by_instance ( d , instance ); if ( ! l )  if ( sub && sub -> calldirection == SKINNY_INCOMING )  if ( sub && sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); if ( c )  setsubstate ( c -> tech_pvt , SUBSTATE_OFFHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  transmit_callstate ( d , l -> instance , subline -> callid , SKINNY_CALLREMOTEMULTILINE ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  if ( skinnydebug )  ast_verb ( 3 , "Transmitting CALL_STATE_MESSAGE to %s - line %d, callid %d, state %s\n" , d -> name , buttonInstance , callid , callstate2str ( state ) ); static char *callstate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & callstate2str_threadbuf , CALLSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , CALLSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 