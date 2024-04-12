static void build_state_zero(struct dfa *d) d -> tralloc = 1; d -> trcount = 0; d -> realtrans = ( ( sizeof ( ( * d -> realtrans ) ) == 1 ? xzalloc ( ( d -> tralloc + 1 ) ) : xcalloc ( ( d -> tralloc + 1 ) , sizeof ( ( * d -> realtrans ) ) ) ) ); while ( 0 )  d -> trans = d -> realtrans + 1; d -> fails = ( ( sizeof ( ( * d -> fails ) ) == 1 ? xzalloc ( ( d -> tralloc ) ) : xcalloc ( ( d -> tralloc ) , sizeof ( ( * d -> fails ) ) ) ) ); while ( 0 )  d -> success = ( ( sizeof ( ( * d -> success ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> success ) ) ) ) ); while ( 0 )  d -> newlines = ( ( sizeof ( ( * d -> newlines ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> newlines ) ) ) ) ); while ( 0 )  build_state ( 0 , d ); static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) int separate_contexts ; state_num state_letter ; if ( d -> searchflag )  separate_contexts = state_separate_contexts ( ( & follows ) ); static int state_separate_contexts(const position_set *s) int separate_contexts = 0 ; size_t j ; for (j = 0; j < s -> nelem; ++j) if ( ( s -> elems [ j ] . constraint >> 2 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 4; if ( ( s -> elems [ j ] . constraint >> 1 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 2; return separate_contexts ; if ( separate_contexts & 2 )  state_letter = state_index ( d , ( & follows ) , 2 ); static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; copy ( s , & d -> states [ i ] . elems ); 