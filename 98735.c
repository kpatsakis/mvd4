static unsigned int __stdcall CVE_2014_3523_PATCHED_winnt_accept(void *lr_) ap_listen_rec * lr = ( ap_listen_rec * ) lr_ ; core_server_config * core_sconf ; const char * accf_name ; core_sconf = ap_get_core_module_config ( ap_server_conf -> module_config ); accf_name = apr_table_get ( core_sconf -> accf_map , lr -> protocol ); if ( ! accf_name )  accf_name = "none"; if ( strcmp ( accf_name , "data" ) == 0 )  if ( strcmp ( accf_name , "connect" ) == 0 )  