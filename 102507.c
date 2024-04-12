static compat_do_ipt_set_ctl(struct sock *sk,	int cmd, void __user unsigned int len) int ret ; if ( ! ns_capable ( sock_net ( sk ) -> user_ns , CAP_NET_ADMIN ) )  switch ( cmd )  ret = compat_do_replace ( sock_net ( sk ) , user , len ); static compat_do_replace(struct net *net, void __user *user, unsigned int len) int ret ; struct compat_ipt_replace tmp ; struct xt_table_info * newinfo ; void * loc_cpu_entry ; if ( copy_from_user ( & tmp , user , sizeof ( tmp ) ) != 0 )  if ( tmp . size >= INT_MAX / num_possible_cpus ( ) )  if ( tmp . num_counters >= INT_MAX / sizeof ( struct xt_counters ) )  if ( tmp . num_counters == 0 )  tmp . name [ sizeof ( tmp . name ) - 1 ] = 0; newinfo = xt_alloc_table_info ( tmp . size ); if ( ! newinfo )  loc_cpu_entry = newinfo -> entries; if ( copy_from_user ( loc_cpu_entry , user + sizeof ( tmp ) , tmp . size ) != 0 )  ret = translate_compat_table ( net , tmp . name , tmp . valid_hooks , & newinfo , & loc_cpu_entry , tmp . size , tmp . num_entries , tmp . hook_entry , tmp . underflow ); static translate_compat_table(struct net const char unsigned int struct xt_table_info void unsigned int unsigned int unsigned int unsigned int *underflows) unsigned int i , j ; struct xt_table_info * newinfo , * info ; void * pos , * entry0 , * entry1 ; struct compat_ipt_entry * iter0 ; unsigned int size ; int ret ; info = * pinfo; entry0 = * pentry0; size = total_size; info -> number = number; for (i = 0; i < NF_INET_NUMHOOKS; i++) info -> hook_entry [ i ] = 0xFFFFFFFF; info -> underflow [ i ] = 0xFFFFFFFF; ret = check_compat_entry_size_and_hooks ( iter0 , info , & size , entry0 , entry0 + total_size , hook_entries , underflows , name ); static check_compat_entry_size_and_hooks(struct compat_ipt_entry struct xt_table_info unsigned int const unsigned char const unsigned char const unsigned int const unsigned int const char *name) struct xt_entry_target * t ; struct xt_target * target ; unsigned int entry_offset ; int ret , off , h ; if ( e -> next_offset < sizeof ( struct compat_ipt_entry ) + sizeof ( struct compat_xt_entry_target ) )  ret = check_entry ( ( struct ipt_entry * ) e , name ); static check_entry(const struct ipt_entry *e, const char *name) const struct xt_entry_target * t ; if ( ! ip_checkentry ( & e -> ip ) )  static ip_checkentry(const struct ipt_ip *ip) if ( ip -> flags & ~IPT_F_MASK )  return false ; if ( ip -> invflags & ~IPT_INV_MASK )  return false ; return true ; return - EINVAL ; if ( e -> target_offset + sizeof ( struct xt_entry_target ) > e -> next_offset )  return - EINVAL ; t = ipt_get_target_c ( e ); static inline const struct xt_entry_target ipt_get_target_c(const struct ipt_entry *e) return ipt_get_target ( ( struct ipt_entry * ) e ) ; if ( e -> target_offset + t -> u . target_size > e -> next_offset )  return - EINVAL ; return 0 ; if ( ret )  off = sizeof ( struct ipt_entry ) - sizeof ( struct compat_ipt_entry ); entry_offset = ( void * ) e - ( void * ) base; ret = compat_find_calc_match ( ematch , name , & e -> ip , & off ); static compat_find_calc_match(struct xt_entry_match const char const struct ipt_ip int *size) struct xt_match * match ; match = xt_request_find_match ( NFPROTO_IPV4 , m -> u . user . name , m -> u . user . revision ); if ( IS_ERR ( match ) )  return PTR_ERR ( match ) ; return 0 ; if ( ret != 0 )  t = compat_ipt_get_target ( e ); target = xt_request_find_target ( NFPROTO_IPV4 , t -> u . user . name , t -> u . user . revision ); if ( IS_ERR ( target ) )  off += xt_compat_target_offset ( target ); ret = xt_compat_add_offset ( AF_INET , entry_offset , off ); if ( ret )  memset ( & e -> counters , 0 , sizeof ( e -> counters ) ); e -> comefrom = 0; xt_ematch_foreach ( ematch , e ) 