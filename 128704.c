 main(int argc, char **argv) char * userstr ; if ( argc > 1 )  userstr = argv [ 1 ]; test ( userstr );  test(char *str) char buf [ MAXSIZE ] ; bcopy ( str , buf , strlen ( str ) ); 