static enum XML_Error entityValueProcessor(XML_Parser const char const char const char **nextPtr) const char * start = s ; const char * next = s ; const ENCODING * enc = encoding ; int tok ; tok = XmlPrologTok ( enc , start , end , & next ); if ( tok <= 0 )  if ( ! ps_finalBuffer && tok != XML_TOK_INVALID )  switch ( tok )  return storeEntityValue ( parser , enc , s , end ) ; start = next; static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  for (i = 0; i < n; i++) if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  BLOCK * tem = pool -> freeBlocks -> next ; pool -> freeBlocks -> next = pool -> blocks; pool -> blocks = pool -> freeBlocks; pool -> freeBlocks = tem; memcpy ( pool -> blocks -> s , pool -> start , ( pool -> end - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = pool -> blocks -> s + ( pool -> ptr - pool -> start ); pool -> start = pool -> blocks -> s; pool -> end = pool -> start + pool -> blocks -> size; 