static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) int mbclen ; int maxlen = 0 ; size_t i ; int * match_lens = ( ( void * ) 0 ) ; size_t nelem = d -> states [ s ] . mbps . nelem ; position_set follows ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  transit_state_consume_1char ( d , s , pp , match_lens , & mbclen , & follows ); static status_transit_state transit_state_consume_1char(struct dfa *d,state_num s,const unsigned char **pp,int *match_lens,int *mbclen,position_set *pps) int k ; state_num s1 ; state_num s2 ; int * work_mbls ; * mbclen = ( mblen_buf [ * pp - buf_begin ] == 0 ? 1 : mblen_buf [ * pp - buf_begin ] ); s1 = s; for (k = 0; k <  *mbclen; k++) s2 = s1; rs = transit_state_singlebyte ( d , s2 , ( * pp ) ++ , & s1 ); static status_transit_state transit_state_singlebyte(struct dfa *d,state_num s,const unsigned char *p,state_num *next_state) state_num * t ; state_num works = s ; status_transit_state rval = TRANSIT_STATE_IN_PROGRESS ; while ( rval == TRANSIT_STATE_IN_PROGRESS )  if ( ( t = d -> trans [ works ] ) != ( ( void * ) 0 ) )  works = t [ * p ]; rval = TRANSIT_STATE_DONE; if ( works < 0 )  works = 0; if ( works < 0 )  works = 0; if ( d -> fails [ works ] )  works = d -> fails [ works ] [ * p ]; rval = TRANSIT_STATE_DONE; return rval ; if ( match_lens == ( ( void * ) 0 ) && d -> states [ s ] . mbps . nelem != 0 )  work_mbls = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); static int *check_matching_with_multibyte_ops(struct dfa *d,state_num s,size_t idx) size_t i ; int * rarray ; rarray = ( ( sizeof ( ( * rarray ) ) == 1 ? xmalloc ( d -> states [ s ] . mbps . nelem ) : xnmalloc ( d -> states [ s ] . mbps . nelem , sizeof ( ( * rarray ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . mbps . nelem; ++i) position pos = d -> states [ s ] . mbps . elems [ i ] ; switch ( d -> tokens [ pos . index ] )  rarray [ i ] = match_anychar ( d , s , pos , idx ); rarray [ i ] = match_mb_charset ( d , s , pos , idx ); static int match_mb_charset(struct dfa *d,state_num s,position pos,size_t idx) size_t i ; int match_len ; int op_len ; char buffer [ 128 ] ; struct mb_char_classes * work_mbc ; int context ; wchar_t wc ; wc = inputwcs [ idx ]; if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  context = wchar_context ( wc ); if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  work_mbc = & d -> mbcsets [ d -> multibyte_prop [ pos . index ] >> 2 ]; match_len = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc < 1 << 8 && work_mbc -> cset != ( - 1 ) && tstbit ( ( ( unsigned char ) wc ) , d -> charclasses [ work_mbc -> cset ] ) )  for (i = 0; i < work_mbc -> nch_classes; i++) if ( iswctype ( ( ( wint_t ) wc ) , work_mbc -> ch_classes [ i ] ) )  strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , match_len ); buffer [ match_len ] = '\0'; for (i = 0; i < work_mbc -> nequivs; i++) op_len = ( strlen ( work_mbc -> equivs [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> equivs [ i ] , buffer ) == 0 )  strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> coll_elems [ i ] , buffer ) == 0 )  