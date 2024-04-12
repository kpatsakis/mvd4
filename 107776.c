static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_onhook_message ( req , s ); static int handle_onhook_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; int instance ; int reference ; instance = letohl ( req -> data . onhook . instance ); reference = letohl ( req -> data . onhook . reference ); if ( instance && reference )  sub = find_subchannel_by_instance_reference ( d , instance , reference ); if ( ! sub )  l = sub -> line; l = d -> activeline; sub = l -> activesub; if ( ! sub )  if ( d -> hookstate == SKINNY_ONHOOK )  if ( l -> transfer && sub -> xferor && sub -> owner -> _state >= AST_STATE_RING )  dumpsub ( sub , 0 ); static void dumpsub(struct skinny_subchannel *sub, int forcehangup) struct skinny_line * l = sub -> line ; struct skinny_subchannel * activatesub = NULL ; struct skinny_subchannel * tsub ; if ( ! forcehangup && sub -> substate == SUBSTATE_HOLD )  if ( sub == l -> activesub )  if ( sub -> related )  activatesub = sub -> related; if ( tsub -> substate == SUBSTATE_CALLWAIT )  activatesub = tsub; if ( activatesub )  setsubstate ( activatesub , SUBSTATE_RINGIN ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( ( d -> hookstate == SKINNY_ONHOOK ) && ( ( actualstate == SUBSTATE_OFFHOOK ) || ( actualstate == SUBSTATE_DIALING ) || ( actualstate == SUBSTATE_RINGOUT ) || ( actualstate == SUBSTATE_CONNECTED ) || ( actualstate == SUBSTATE_BUSY ) || ( actualstate == SUBSTATE_CONGESTION ) || ( actualstate == SUBSTATE_PROGRESS ) ) )  d -> hookstate = SKINNY_OFFHOOK; if ( actualstate == sub -> substate )  switch ( actualstate )  l -> activesub = sub; sub -> substate = SUBSTATE_OFFHOOK; if ( sub -> related )  sub -> related -> related = NULL; if ( sub == l -> activesub )  l -> activesub = NULL; sub -> cxmode = SKINNY_CX_RECVONLY; sub -> substate = SUBSTATE_ONHOOK; if ( sub -> rtp )  sub -> rtp = NULL; if ( ast_strlen_zero ( sub -> exten ) || ! ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; sub -> substate = SUBSTATE_DIALING; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS ) )  sub -> substate = SUBSTATE_RINGOUT; if ( d -> hookstate == SKINNY_ONHOOK )  l -> activesub = sub; sub -> substate = SUBSTATE_RINGIN; sub -> substate = SUBSTATE_CALLWAIT; sub -> substate = SUBSTATE_CONNECTED; l -> activesub = sub; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_BUSY; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_CONGESTION; if ( sub -> substate != SUBSTATE_DIALING )  sub -> substate = SUBSTATE_PROGRESS; if ( sub -> substate != SUBSTATE_CONNECTED )  ast_queue_control_data ( sub -> owner , AST_CONTROL_HOLD , S_OR ( l -> mohsuggest , NULL ) , ! ast_strlen_zero ( l -> mohsuggest ) ? strlen ( l -> mohsuggest ) + 1 : 0 ); 