int create_msg(u_char *buf) u_char * * dnptrs , * * lastdnptr , * * dnptrs2 ; dnptrs = ( unsigned char * * ) malloc ( 2 * sizeof ( unsigned char * ) ); * dnptrs ++ = ( u_char * ) exp_dn; * dnptrs -- = NULL; comp_size = dn_comp ( ( const char * ) exp_dn , comp_dn , 200 , dnptrs , lastdnptr ); printf ( "comp_size = %d\n" , comp_size ); for(i=0; i<comp_size; i++) len += comp_size; len += 10; printf ( "comp_size = %d\n" , comp_size ); len += comp_size; for(i=0; i<comp_size; i++) len += 16; return ( len ) ; 