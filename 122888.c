 main(int argc, char **argv) char * userstr ; if ( argc > 1 )  userstr = argv [ 1 ]; if ( strlen ( userstr ) <= MAXSIZE )  test ( userstr );  test(char *str) char buf [ MAXSIZE ] ; sprintf ( buf , "<%s>" , str ); printf ( "result: %s\n" , buf ); 