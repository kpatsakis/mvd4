int udp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr size_t len, int noblock, int flags, int *addr_len) struct sockaddr_in * sin = ( struct sockaddr_in * ) msg -> msg_name ; struct sk_buff * skb ; unsigned int ulen , copied ; int err ; if ( flags & MSG_ERRQUEUE )  skb = __skb_recv_datagram ( sk , flags | ( noblock ? MSG_DONTWAIT : 0 ) , & peeked , & off , & err ); if ( ! skb )  ulen = skb -> len - sizeof ( struct udphdr ); copied = len; if ( copied > ulen )  copied = ulen; if ( copied < ulen )  msg -> msg_flags |= MSG_TRUNC; if ( copied < ulen || UDP_SKB_CB ( skb ) -> partial_cov )  if ( udp_lib_checksum_complete ( skb ) )  if ( skb_csum_unnecessary ( skb ) )  err = skb_copy_datagram_iovec ( skb , sizeof ( struct udphdr ) , msg -> msg_iov , copied ); err = skb_copy_and_csum_datagram_iovec ( skb , sizeof ( struct udphdr ) , msg -> msg_iov ); if ( err == - EINVAL )  if ( unlikely ( err ) )  if ( sin )  sin -> sin_family = AF_INET; sin -> sin_port = udp_hdr ( skb ) -> source; sin -> sin_addr . s_addr = ip_hdr ( skb ) -> saddr; memset ( sin -> sin_zero , 0 , sizeof ( sin -> sin_zero ) ); if ( noblock )  msg -> msg_flags &= ~MSG_TRUNC; 