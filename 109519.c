XML_Bool XML_ParserReset(XML_Parser parser, const XML_Char *encodingName) if ( parentParser )  return setContext ( parser , implicitContext ) ; static setContext(XML_Parser parser, const XML_Char *context) DTD * const dtd = _dtd const XML_Char * s = context ; while ( * context != XML_T ( '\0' ) )  if ( * s == CONTEXT_SEP || * s == XML_T ( '\0' ) )  ENTITY * e ; if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  e = ( ENTITY * ) lookup ( & dtd -> generalEntities , poolStart ( & tempPool ) , 0 ); if ( * s != XML_T ( '\0' ) )  s ++; context = s; if ( * s == XML_T ( '=' ) )  PREFIX * prefix ; if ( poolLength ( & tempPool ) == 0 )  prefix = & dtd -> defaultPrefix; if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  prefix = ( PREFIX * ) lookup ( & dtd -> prefixes , poolStart ( & tempPool ) , sizeof ( PREFIX ) ); if ( ! prefix )  if ( prefix -> name == poolStart ( & tempPool ) )  prefix -> name = poolCopyString ( & dtd -> pool , prefix -> name ); if ( ! prefix -> name )  for (context = s + *context != CONTEXT_SEP && *context != context++) if ( ! poolAppendChar ( & tempPool , * context ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  if ( addBinding ( parser , prefix , NULL , poolStart ( & tempPool ) , & inheritedBindings ) != XML_ERROR_NONE )  s = context; if ( ! poolAppendChar ( & tempPool , * s ) )  s ++; static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  size_t tsize ; if ( ! createSize )  table -> power = INIT_POWER; table -> size = ( size_t ) 1 << INIT_POWER; tsize = table -> size * sizeof ( NAMED * ); table -> v = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ); if ( ! table -> v )  memset ( table -> v , 0 , tsize ); i = hash ( name ) & ( ( unsigned long ) table -> size - 1 ); unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; unsigned long newMask = ( unsigned long ) newSize - 1 ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); for (i = 0; i < table->size; i++) if ( table -> v [ i ] )  unsigned long newHash = hash ( table -> v [ i ] -> name ) ; size_t j = newHash & newMask ; step = 0; while ( newV [ j ] )  if ( ! step )  step = PROBE_STEP ( newHash , newMask , newPower ); j < step ? ( j += newSize - step ) : ( j -= step ); newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; i = h & newMask; step = 0; while ( table -> v [ i ] )  if ( ! step )  step = PROBE_STEP ( h , newMask , newPower ); i < step ? ( i += newSize - step ) : ( i -= step ); table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 