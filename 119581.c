gboolean try_conversation_dissector(const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,tvbuff_t *tvb,packet_info *pinfo,proto_tree *tree) conversation_t * conversation ; conversation = find_conversation ( pinfo -> fd -> num , addr_a , addr_b , ptype , port_a , port_b , 0 ); conversation_t *find_conversation(const guint32 frame_num,const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,const guint options) conversation_t * conversation ; if ( ! ( options & ( 0x01 | 0x02 ) ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x01 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x01 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; for (convo = match; convo && convo -> setup_frame <= frame_num; convo = convo -> next) if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  if ( ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  if ( ptype != PT_UDP )  if ( ! ( conversation -> options & 0x08 ) )  conversation_set_addr2 ( conversation , addr_a ); void conversation_set_addr2(conversation_t *conv,const address *addr) ( void ) ( ! ( conv -> options & 0x08 ) ? ( ( void ) 0 ) : ( ( getenv ( "WIRESHARK_ABORT_ON_DISSECTOR_BUG" ) != ( ( void * ) 0 ) ? abort ( ) : except_throw ( 1 , 4 , ( ep_strdup_printf ( "%s:%u: failed assertion \"%s\" (%s)" , "conversation.c" , 710 , "!(conv->options & 0x08)" , "Use the conversation_create_from_template function when the CONVERSATION_TEMPLATE bit is set in the options mask" ) ) ) ) ) ); 