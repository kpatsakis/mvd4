static struct sk_buff CVE_2014_9428_PATCHED_batadv_frag_merge_packets(struct hlist_head *chain, struct sk_buff *skb) struct batadv_frag_packet * packet ; struct batadv_frag_list_entry * entry ; int size , hdr_size = sizeof ( struct batadv_frag_packet ) ; packet = ( struct batadv_frag_packet * ) skb -> data; size = ntohs ( packet -> total_size ); if ( size > batadv_frag_size_limit ( ) )  entry = hlist_entry ( chain -> first , struct batadv_frag_list_entry , list ) skb_out = entry -> skb; if ( pskb_expand_head ( skb_out , 0 , size - skb_out -> len , GFP_ATOMIC ) < 0 )  memmove ( skb_out -> data - ETH_HLEN , skb_mac_header ( skb_out ) , ETH_HLEN ); size = entry -> skb -> len - hdr_size; memcpy ( skb_put ( skb_out , size ) , entry -> skb -> data + hdr_size , size ); 