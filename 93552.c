static void build_state_zero(struct dfa *d) d -> tralloc = 1; d -> trcount = 0; d -> realtrans = ( ( sizeof ( ( * d -> realtrans ) ) == 1 ? xzalloc ( ( d -> tralloc + 1 ) ) : xcalloc ( ( d -> tralloc + 1 ) , sizeof ( ( * d -> realtrans ) ) ) ) ); while ( 0 )  d -> trans = d -> realtrans + 1; d -> fails = ( ( sizeof ( ( * d -> fails ) ) == 1 ? xzalloc ( ( d -> tralloc ) ) : xcalloc ( ( d -> tralloc ) , sizeof ( ( * d -> fails ) ) ) ) ); while ( 0 )  d -> success = ( ( sizeof ( ( * d -> success ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> success ) ) ) ) ); while ( 0 )  d -> newlines = ( ( sizeof ( ( * d -> newlines ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> newlines ) ) ) ) ); while ( 0 )  build_state ( 0 , d ); static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) leaf_set * grps ; charclass * labels ; size_t ngrps = 0 ; position pos ; charclass matches ; int matchesf ; charclass intersect ; int intersectf ; charclass leftovers ; int leftoversf ; size_t i ; size_t j ; size_t k ; grps = ( ( sizeof ( ( * grps ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * grps ) ) ) ) ); while ( 0 )  labels = ( ( sizeof ( ( * labels ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * labels ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . elems . nelem; ++i) pos = d -> states [ s ] . elems . elems [ i ]; if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) )  if ( d -> tokens [ pos . index ] >= CSET )  if ( pos . constraint != 0x777 )  if ( ! ( ( ( ( 4 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~newline [ j ]; if ( ! ( ( ( ( 2 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~letters [ j ]; if ( ! ( ( ( ( 1 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= letters [ j ] | newline [ j ]; if ( j == ( ( 1 << 8 ) + 8 * sizeof ( int ) - 1 ) / ( 8 * sizeof ( int ) ) )  for (j = 0; j < ngrps; ++j) if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) && ! tstbit ( d -> tokens [ pos . index ] , labels [ j ] ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; intersectf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) ( intersect [ k ] = matches [ k ] & labels [ j ] [ k ] ) ? ( intersectf = 1 ) : 0; if ( ! intersectf )  leftoversf = matchesf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) int match = matches [ k ] ; int label = labels [ j ] [ k ] ; ( leftovers [ k ] = ~match & label ) ? ( leftoversf = 1 ) : 0; ( matches [ k ] = match & ~label ) ? ( matchesf = 1 ) : 0; if ( leftoversf )  copyset ( intersect , labels [ j ] ); grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  memcpy ( grps [ ngrps ] . elems , grps [ j ] . elems , sizeof ( grps [ j ] . elems [ 0 ] ) * grps [ j ] . nelem ); grps [ ngrps ] . nelem = grps [ j ] . nelem; grps [ j ] . elems [ grps [ j ] . nelem ++ ] = pos . index; if ( ! matchesf )  if ( j == ngrps )  grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  grps [ ngrps ] . nelem = 1; grps [ ngrps ] . elems [ 0 ] = pos . index; static void copyset(const int src[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],charclass dst) memcpy ( dst , src , sizeof ( charclass ) ); 