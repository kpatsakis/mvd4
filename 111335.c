int CVE_2012_2669_VULN_main(void) int fd , len , sock_opt ; struct cn_msg * message ; fd = socket ( AF_NETLINK , SOCK_DGRAM , NETLINK_CONNECTOR ); message = ( struct cn_msg * ) kvp_send_buffer; message -> id . idx = CN_KVP_IDX; message -> id . val = CN_KVP_VAL; message -> ack = 0; message -> len = sizeof ( struct hv_kvp_msg ); len = netlink_send ( fd , message ); while ( 1 )  len = recv ( fd , kvp_recv_buffer , sizeof ( kvp_recv_buffer ) , 0 ); if ( len < 0 )  close ( fd ); 