static ssize_t mergeable_rx_buffer_size_show(struct netdev_rx_queue struct rx_queue_attribute *attribute, char *buf) struct virtnet_info * vi = netdev_priv ( queue -> dev ) ; unsigned int queue_index = get_netdev_rx_queue_index ( queue ) ; struct ewma * avg ; avg = & vi -> rq [ queue_index ] . mrg_avg_pkt_len; return sprintf ( buf , "%u\n" , get_mergeable_buf_len ( avg ) ) ; static unsigned int get_mergeable_buf_len(struct ewma *avg_pkt_len) unsigned int len ; len = hdr_len + clamp_t ( unsigned int , ewma_read ( avg_pkt_len ) GOOD_PACKET_LEN , PAGE_SIZE - hdr_len ) return ALIGN ( len , MERGEABLE_BUFFER_ALIGN ) ; 