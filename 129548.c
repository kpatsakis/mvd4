apr_size_t svn__i64toa(char *dest,apr_int64_t number) if ( number >= 0 )  * dest = 45; return svn__ui64toa ( dest + 1 , ( ( apr_uint64_t ) ( 0 - number ) ) ) + 1 ; apr_size_t svn__ui64toa(char *dest,apr_uint64_t number) char buffer [ 21 ] ; apr_uint32_t reduced ; char * target ; if ( number < 100 )  buffer [ 21 - 1 ] = 0; target = & buffer [ 21 - 3 ]; while ( number >= 100000000 )  reduced = ( ( apr_uint32_t ) ( number % 100000000 ) ); number /= 100000000; memcpy ( ( target - 0 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 2 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 4 ) , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; memcpy ( ( target - 6 ) , decimal_table [ reduced % 100 ] , 2 ); target -= 8; reduced = ( ( apr_uint32_t ) number ); while ( reduced >= 100 )  memcpy ( target , decimal_table [ reduced % 100 ] , 2 ); reduced /= 100; target -= 2; memcpy ( target , decimal_table [ reduced ] , 2 ); memcpy ( dest , target , ( & buffer [ 21 ] - target ) ); return ( & buffer [ 21 ] - target - 1 ) ; 