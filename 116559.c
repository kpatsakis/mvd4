int create_msg(u_char *buf) char exp_dn [ 200 ] , exp_dn2 [ 200 ] ; strcpy ( exp_dn , "lcs.mit.edu" ); * dnptrs ++ = ( u_char * ) exp_dn; * dnptrs -- = NULL; comp_size = dn_comp ( ( const char * ) exp_dn , comp_dn , 200 , dnptrs , lastdnptr ); printf ( "uncomp_size = %d\n" , strlen ( exp_dn ) ); printf ( "comp_size = %d\n" , comp_size ); printf ( "exp_dn = %s, comp_dn = %s\n" , exp_dn , ( char * ) comp_dn ); for(i=0; i<comp_size; i++) len += comp_size; len += 10; printf ( "comp_size = %d\n" , comp_size ); len += comp_size; for(i=0; i<comp_size; i++) len += 16; return ( len ) ; 