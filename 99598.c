int CVE_2012_2669_PATCHED_main(void) int fd , len , sock_opt ; int error ; fd = socket ( AF_NETLINK , SOCK_DGRAM , NETLINK_CONNECTOR ); addr . nl_family = AF_NETLINK; addr . nl_pad = 0; addr . nl_pid = 0; addr . nl_groups = CN_KVP_IDX; error = bind ( fd , ( struct sockaddr * ) & addr , sizeof ( addr ) ); if ( error < 0 )  syslog ( LOG_ERR , "bind failed; error:%d" , error ); 