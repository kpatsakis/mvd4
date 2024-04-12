void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) d -> searchflag = searchflag; d -> follows = ( ( sizeof ( ( * d -> follows ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * d -> follows ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> tindex; ++i) switch ( d -> tokens [ i ] )  * ( nullable ++ ) = 1; merge ( ( & tmp ) , ( & d -> follows [ pos [ j ] . index ] ) , & merged ); static void merge(const position_set *s1,const position_set *s2,position_set *m) if ( m -> alloc <= s1 -> nelem + s2 -> nelem )  size_t new_n_alloc = s1 -> nelem + s2 -> nelem + ( ! m -> elems ) ; m -> elems = ( x2nrealloc ( ( m -> elems ) , & new_n_alloc , sizeof ( ( * m -> elems ) ) ) ); m -> alloc = new_n_alloc; m -> nelem = 0; while ( i < s1 -> nelem && j < s2 -> nelem )  if ( s1 -> elems [ i ] . index > s2 -> elems [ j ] . index )  m -> elems [ m -> nelem ++ ] = s1 -> elems [ i ++ ]; if ( s1 -> elems [ i ] . index < s2 -> elems [ j ] . index )  m -> elems [ m -> nelem ++ ] = s2 -> elems [ j ++ ]; m -> elems [ m -> nelem ] = s1 -> elems [ i ++ ]; m -> elems [ m -> nelem ++ ] . constraint |= s2 -> elems [ j ++ ] . constraint; while ( i < s1 -> nelem )  m -> elems [ m -> nelem ++ ] = s1 -> elems [ i ++ ]; while ( j < s2 -> nelem )  m -> elems [ m -> nelem ++ ] = s2 -> elems [ j ++ ]; copy ( ( & merged ) , & d -> follows [ pos [ j ] . index ] ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; if ( d -> tokens [ i ] != PLUS )  nullable [ - 1 ] = 1; merge ( ( & tmp ) , ( & d -> follows [ pos [ j ] . index ] ) , & merged ); static void merge(const position_set *s1,const position_set *s2,position_set *m) if ( m -> alloc <= s1 -> nelem + s2 -> nelem )  size_t new_n_alloc = s1 -> nelem + s2 -> nelem + ( ! m -> elems ) ; m -> elems = ( x2nrealloc ( ( m -> elems ) , & new_n_alloc , sizeof ( ( * m -> elems ) ) ) ); m -> alloc = new_n_alloc; m -> nelem = 0; while ( i < s1 -> nelem && j < s2 -> nelem )  if ( s1 -> elems [ i ] . index > s2 -> elems [ j ] . index )  m -> elems [ m -> nelem ++ ] = s1 -> elems [ i ++ ]; if ( s1 -> elems [ i ] . index < s2 -> elems [ j ] . index )  m -> elems [ m -> nelem ++ ] = s2 -> elems [ j ++ ]; m -> elems [ m -> nelem ] = s1 -> elems [ i ++ ]; m -> elems [ m -> nelem ++ ] . constraint |= s2 -> elems [ j ++ ] . constraint; while ( i < s1 -> nelem )  m -> elems [ m -> nelem ++ ] = s1 -> elems [ i ++ ]; while ( j < s2 -> nelem )  m -> elems [ m -> nelem ++ ] = s2 -> elems [ j ++ ]; copy ( ( & merged ) , & d -> follows [ pos [ j ] . index ] ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; if ( nullable [ - 2 ] )  if ( nullable [ - 1 ] )  nullable [ - 2 ] = nullable [ - 1 ] && nullable [ - 2 ]; nullable [ - 2 ] = nullable [ - 1 ] || nullable [ - 2 ]; * ( nullable ++ ) = d -> tokens [ i ] == BACKREF; alloc_position_set ( & d -> follows [ i ] , 1 ); static void alloc_position_set(position_set *s,size_t size) s -> elems = ( ( sizeof ( ( * s -> elems ) ) == 1 ? xmalloc ( size ) : xnmalloc ( size , sizeof ( ( * s -> elems ) ) ) ) ); s -> alloc = size; s -> nelem = 0; for (i = 0; i < d -> tindex; ++i) if ( d -> tokens [ i ] < ( 1 << 8 ) || d -> tokens [ i ] == BACKREF || d -> tokens [ i ] == ANYCHAR || d -> tokens [ i ] == MBCSET || d -> tokens [ i ] >= CSET )  copy ( ( & d -> follows [ i ] ) , & merged ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; epsclosure ( & merged , d ); static void epsclosure(position_set *s,const struct dfa *d) visited = ( ( sizeof ( ( * visited ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * visited ) ) ) ) ); for (i = 0; i < s -> nelem; ++i) if ( d -> tokens [ s -> elems [ i ] . index ] >= ( 1 << 8 ) && d -> tokens [ s -> elems [ i ] . index ] != BACKREF && d -> tokens [ s -> elems [ i ] . index ] != ANYCHAR && d -> tokens [ s -> elems [ i ] . index ] != MBCSET && d -> tokens [ s -> elems [ i ] . index ] < CSET )  old = s -> elems [ i ]; p . constraint = old . constraint; delete s -> elems [ i ] , s if ( visited [ old . index ] )  visited [ old . index ] = 1; switch ( d -> tokens [ old . index ] )  p . constraint &= 0x444; p . constraint &= 0x700; p . constraint &= 0x050; p . constraint &= 0x202; p . constraint &= 0x252; p . constraint &= 0x525; for (j = 0; j < d -> follows[old . index] . nelem; ++j) p . index = d -> follows [ old . index ] . elems [ j ] . index; insert ( p , s ); static void insert(position p,position_set *s) size_t count = s -> nelem ; size_t hi = count ; while ( lo < hi )  size_t mid = lo + hi >> 1 ; if ( s -> elems [ mid ] . index > p . index )  lo = mid + 1; hi = mid; if ( lo < count && p . index == s -> elems [ lo ] . index )  s -> elems [ lo ] . constraint |= p . constraint; if ( s -> alloc <= count + 1 )  size_t new_n_alloc = count + 1 + ( ! s -> elems ) ; s -> elems = ( x2nrealloc ( ( s -> elems ) , & new_n_alloc , sizeof ( ( * s -> elems ) ) ) ); s -> alloc = new_n_alloc; for (i = count; i > lo; i--) s -> elems [ i ] = s -> elems [ i - 1 ]; s -> elems [ lo ] = p; ++ s -> nelem; free ( visited ); copy ( ( & merged ) , & d -> follows [ i ] ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; epsclosure ( & merged , d ); static void epsclosure(position_set *s,const struct dfa *d) visited = ( ( sizeof ( ( * visited ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * visited ) ) ) ) ); if ( d -> tokens [ s -> elems [ i ] . index ] >= ( 1 << 8 ) && d -> tokens [ s -> elems [ i ] . index ] != BACKREF && d -> tokens [ s -> elems [ i ] . index ] != ANYCHAR && d -> tokens [ s -> elems [ i ] . index ] != MBCSET && d -> tokens [ s -> elems [ i ] . index ] < CSET )  old = s -> elems [ i ]; p . constraint = old . constraint; delete s -> elems [ i ] , s if ( visited [ old . index ] )  visited [ old . index ] = 1; switch ( d -> tokens [ old . index ] )  p . constraint &= 0x444; p . constraint &= 0x700; p . constraint &= 0x050; p . constraint &= 0x202; p . constraint &= 0x252; p . constraint &= 0x525; p . index = d -> follows [ old . index ] . elems [ j ] . index; insert ( p , s ); free ( visited ); d -> salloc = 1; d -> sindex = 0; d -> states = ( ( sizeof ( ( * d -> states ) ) == 1 ? xmalloc ( ( d -> salloc ) ) : xnmalloc ( ( d -> salloc ) , sizeof ( ( * d -> states ) ) ) ) ); state_index ( d , ( & merged ) , ( separate_contexts & 4 ? 4 : separate_contexts ^ 7 ) ); static state_num state_index(struct dfa *d,const position_set *s,int context) for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  for (j = 0; j < s -> nelem; ++j) if ( s -> elems [ j ] . constraint != d -> states [ i ] . elems . elems [ j ] . constraint || s -> elems [ j ] . index != d -> states [ i ] . elems . elems [ j ] . index )  if ( j == s -> nelem )  if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; d -> states [ i ] . hash = hash; alloc_position_set ( & d -> states [ i ] . elems , s -> nelem ); static void alloc_position_set(position_set *s,size_t size) s -> elems = ( ( sizeof ( ( * s -> elems ) ) == 1 ? xmalloc ( size ) : xnmalloc ( size , sizeof ( ( * s -> elems ) ) ) ) ); s -> alloc = size; s -> nelem = 0; copy ( s , & d -> states [ i ] . elems ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); for (j = 0; j < s -> nelem; ++j) if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; ++ d -> sindex; return i ; 