static int CVE_2014_2739_PATCHED_cma_req_handler(struct ib_cm_id *cm_id, struct ib_cm_event *ib_event) struct rdma_id_private * listen_id , * conn_id ; struct rdma_cm_event event ; listen_id = cm_id -> context; if ( ! cma_check_req_qp_type ( & listen_id -> id , ib_event ) )  if ( cma_disable_callback ( listen_id , RDMA_CM_LISTEN ) )  memset ( & event , 0 , sizeof event ); event . event = RDMA_CM_EVENT_CONNECT_REQUEST; event . param . ud . private_data = ib_event -> private_data + offset; event . param . ud . private_data_len = IB_CM_SIDR_REQ_PRIVATE_DATA_SIZE - offset; ret = conn_id -> id . event_handler ( & conn_id -> id , & event ); if ( ret )  return ret ; 