static void CVE_2015_2922_PATCHED_ndisc_router_discovery(struct sk_buff *skb) struct ra_msg * ra_msg = ( struct ra_msg * ) skb_transport_header ( skb ) ; struct neighbour * neigh = NULL ; struct inet6_dev * in6_dev ; int lifetime ; struct ndisc_options ndopts ; int optlen ; __u8 * opt = ( __u8 * ) ( ra_msg + 1 ) ; optlen = ( skb -> tail - skb -> transport_header ) - sizeof ( struct ra_msg ); if ( ! ( ipv6_addr_type ( & ipv6_hdr ( skb ) -> saddr ) & IPV6_ADDR_LINKLOCAL ) )  if ( optlen < 0 )  if ( skb -> ndisc_nodetype == NDISC_NODETYPE_HOST )  in6_dev = __in6_dev_get ( skb -> dev ); if ( in6_dev == NULL )  if ( ! ndisc_parse_options ( opt , optlen , & ndopts ) )  if ( ! accept_ra ( in6_dev ) )  if ( skb -> ndisc_nodetype == NDISC_NODETYPE_NODEFAULT )  if ( in6_dev -> if_flags & IF_RS_SENT )  in6_dev -> if_flags |= IF_RA_RCVD; in6_dev -> if_flags = ( in6_dev -> if_flags & ~ ( IF_RA_MANAGED | IF_RA_OTHERCONF ) ) | ( ra_msg -> icmph . icmp6_addrconf_managed ? IF_RA_MANAGED : 0 ) | ( ra_msg -> icmph . icmp6_addrconf_other ? IF_RA_OTHERCONF : 0 ); if ( ! in6_dev -> cnf . accept_ra_defrtr )  if ( ipv6_chk_addr ( dev_net ( in6_dev -> dev ) , & ipv6_hdr ( skb ) -> saddr , NULL , 0 ) )  lifetime = ntohs ( ra_msg -> icmph . icmp6_rt_lifetime ); pref = ra_msg -> icmph . icmp6_router_pref; if ( pref == ICMPV6_ROUTER_PREF_INVALID || ! in6_dev -> cnf . accept_ra_rtr_pref )  pref = ICMPV6_ROUTER_PREF_MEDIUM; rt = rt6_get_dflt_router ( & ipv6_hdr ( skb ) -> saddr , skb -> dev ); if ( rt )  neigh = dst_neigh_lookup ( & rt -> dst , & ipv6_hdr ( skb ) -> saddr ); if ( ! neigh )  if ( rt && lifetime == 0 )  rt = NULL; if ( rt == NULL && lifetime )  rt = rt6_add_dflt_router ( & ipv6_hdr ( skb ) -> saddr , skb -> dev , pref ); if ( rt == NULL )  neigh = dst_neigh_lookup ( & rt -> dst , & ipv6_hdr ( skb ) -> saddr ); if ( neigh == NULL )  neigh -> flags |= NTF_ROUTER; if ( ra_msg -> icmph . icmp6_hop_limit )  if ( in6_dev -> cnf . hop_limit < ra_msg -> icmph . icmp6_hop_limit )  in6_dev -> cnf . hop_limit = ra_msg -> icmph . icmp6_hop_limit; if ( in6_dev -> nd_parms )  unsigned long rtime = ntohl ( ra_msg -> retrans_timer ) ; if ( rtime && rtime / 1000 < MAX_SCHEDULE_TIMEOUT / HZ )  rtime = ( rtime * HZ ) / 1000; if ( rtime < HZ / 10 )  rtime = HZ / 10; in6_dev -> nd_parms -> retrans_time = rtime; in6_dev -> tstamp = jiffies; rtime = ntohl ( ra_msg -> reachable_time ); if ( rtime && rtime / 1000 < MAX_SCHEDULE_TIMEOUT / ( 3 * HZ ) )  rtime = ( rtime * HZ ) / 1000; if ( rtime < HZ / 10 )  rtime = HZ / 10; if ( rtime != in6_dev -> nd_parms -> base_reachable_time )  in6_dev -> nd_parms -> base_reachable_time = rtime; in6_dev -> nd_parms -> gc_staletime = 3 * rtime; in6_dev -> nd_parms -> reachable_time = neigh_rand_reach_time ( rtime ); in6_dev -> tstamp = jiffies; if ( ! neigh )  neigh = __neigh_lookup ( & nd_tbl , & ipv6_hdr ( skb ) -> saddr , skb -> dev , 1 ); if ( neigh )  if ( ndopts . nd_opts_src_lladdr )  lladdr = ndisc_opt_addr_data ( ndopts . nd_opts_src_lladdr , skb -> dev ); if ( ! lladdr )  if ( ! accept_ra ( in6_dev ) )  if ( skb -> ndisc_nodetype == NDISC_NODETYPE_NODEFAULT )  if ( ndopts . nd_opts_mtu )  __be32 n ; memcpy ( & n , ( ( u8 * ) ( ndopts . nd_opts_mtu + 1 ) ) + 2 , sizeof ( mtu ) ); mtu = ntohl ( n ); if ( mtu < IPV6_MIN_MTU || mtu > skb -> dev -> mtu )  ND_PRINTK ( 2 , warn , "RA: invalid mtu: %d\n" , mtu ); if ( in6_dev -> cnf . mtu6 != mtu )  in6_dev -> cnf . mtu6 = mtu; dst_metric_set ( & rt -> dst , RTAX_MTU , mtu ); rt6_mtu_change ( skb -> dev , mtu ); 