int main(int argc, char **argv) u_char * msg , * cp , * eom ; msg = ( u_char * ) malloc ( 10000 * sizeof ( u_char ) ); msglen = create_msg ( msg , 10000 ); int create_msg(u_char *msg, int len) while ( ( ( c = fgetc ( f ) ) != EOF ) && ( i < len ) )  * msg ++ = ( u_char ) c; hp = ( HEADER * ) msg; cp = msg + sizeof ( HEADER ); eom = msg + msglen; printf ( "opcode = %d\n" , hp -> opcode ); switch ( hp -> opcode )  req_iquery ( hp , & cp , eom , & msglen , msg ); static enum req_iquery(HEADER *hp, u_char **cpp, u_char *eom, int *buflenp, u_char *msg) if ( ( n = dn_skipname ( * cpp , eom ) ) < 0 )  hp -> rcode = FORMERR; * cpp += n; GETSHORT ( type , * cpp ); GETSHORT ( class , * cpp ) * cpp += INT32SZ; GETSHORT ( dlen , * cpp ); * cpp += dlen; if ( * cpp != eom )  hp -> rcode = FORMERR; fname = ( char * ) msg + HFIXEDSZ; alen = ( char * ) * cpp - fname; if ( ( size_t ) alen > sizeof anbuf )  printf ( "Copying %d bytes from fname to anbuf which can store %d bytes\n" , alen , sizeof ( anbuf ) ); memcpy ( anbuf , fname , alen ); data = anbuf + alen - dlen; * cpp = ( u_char * ) fname; * buflenp -= HFIXEDSZ; 