static int do_replace(struct net *net, const void __user unsigned int len) int ret ; struct arpt_replace tmp ; struct xt_table_info * newinfo ; void * loc_cpu_entry ; if ( copy_from_user ( & tmp , user , sizeof ( tmp ) ) != 0 )  if ( tmp . num_counters >= INT_MAX / sizeof ( struct xt_counters ) )  if ( tmp . num_counters == 0 )  tmp . name [ sizeof ( tmp . name ) - 1 ] = 0; newinfo = xt_alloc_table_info ( tmp . size ); if ( ! newinfo )  loc_cpu_entry = newinfo -> entries; if ( copy_from_user ( loc_cpu_entry , user + sizeof ( tmp ) , tmp . size ) != 0 )  ret = translate_table ( newinfo , loc_cpu_entry , & tmp ); static int translate_table(struct xt_table_info *newinfo, void const struct arpt_replace *repl) struct arpt_entry * iter ; unsigned int i ; newinfo -> size = repl -> size; newinfo -> number = repl -> num_entries; for (i = 0; i < NF_ARP_NUMHOOKS; i++) newinfo -> hook_entry [ i ] = 0xFFFFFFFF; newinfo -> underflow [ i ] = 0xFFFFFFFF; i = 0; ret = check_entry_size_and_hooks ( iter , newinfo , entry0 , entry0 + repl -> size , repl -> hook_entry , repl -> underflow , repl -> valid_hooks ); if ( ret != 0 )  if ( i != repl -> num_entries )  for (i = 0; i < NF_ARP_NUMHOOKS; i++) if ( ! ( repl -> valid_hooks & ( 1 << i ) ) )  if ( newinfo -> hook_entry [ i ] == 0xFFFFFFFF )  if ( newinfo -> underflow [ i ] == 0xFFFFFFFF )  if ( ! mark_source_chains ( newinfo , repl -> valid_hooks , entry0 ) )  static int mark_source_chains(const struct xt_table_info unsigned int valid_hooks, void *entry0) unsigned int hook ; for (hook = 0; hook < NF_ARP_NUMHOOKS; hook++) unsigned int pos = newinfo -> hook_entry [ hook ] ; struct arpt_entry * e = ( struct arpt_entry * ) ( entry0 + pos ) ; if ( ! ( valid_hooks & ( 1 << hook ) ) )  e -> counters . pcnt = pos; const struct xt_standard_target * t = ( void * ) arpt_get_target_c ( e ) ; int visited = e -> comefrom & ( 1 << hook ) ; if ( e -> comefrom & ( 1 << NF_ARP_NUMHOOKS ) )  e -> comefrom |= ( ( 1 << hook ) | ( 1 << NF_ARP_NUMHOOKS ) ); if ( ( e -> target_offset == sizeof ( struct arpt_entry ) && ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 ) && t -> verdict < 0 && unconditional ( & e -> arp ) ) || visited )  unsigned int oldpos , size ; if ( ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 ) && t -> verdict < - NF_MAX_VERDICT - 1 )  e -> comefrom ^= ( 1 << NF_ARP_NUMHOOKS ); oldpos = pos; pos = e -> counters . pcnt; e -> counters . pcnt = 0; if ( pos == oldpos )  e = ( struct arpt_entry * ) ( entry0 + pos ); while ( oldpos == pos + e -> next_offset )  size = e -> next_offset; e = ( struct arpt_entry * ) ( entry0 + pos + size ); e -> counters . pcnt = pos; pos += size; int newpos = t -> verdict ; if ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 && newpos >= 0 )  if ( newpos > newinfo -> size - sizeof ( struct arpt_entry ) )  newpos = pos + e -> next_offset; e = ( struct arpt_entry * ) ( entry0 + newpos ); e -> counters . pcnt = pos; pos = newpos; static inline bool unconditional(const struct arpt_arp *arp) static const struct arpt_arp uncond ; return memcmp ( arp , & uncond , sizeof ( uncond ) ) == 0 ; 