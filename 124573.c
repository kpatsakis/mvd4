static enum XML_Error internalEntityProcessor(XML_Parser const char const char const char **nextPtr) ENTITY * entity ; const char * textStart , * textEnd ; const char * next ; enum XML_Error result ; OPEN_INTERNAL_ENTITY * openEntity = openInternalEntities ; if ( ! openEntity )  entity = openEntity -> entity; textStart = ( ( char * ) entity -> textPtr ) + entity -> processed; textEnd = ( char * ) ( entity -> textPtr + entity -> textLen ); if ( entity -> is_param )  int tok = XmlPrologTok ( internalEncoding , textStart , textEnd , & next ) ; result = doProlog ( parser , internalEncoding , textStart , textEnd , tok , next , & next , XML_FALSE ); result = doContent ( parser , openEntity -> startTagLevel , internalEncoding , textStart , textEnd , & next , XML_FALSE ); if ( result != XML_ERROR_NONE )  if ( textEnd != next && ps_parsing == XML_SUSPENDED )  entity -> open = XML_FALSE; if ( entity -> is_param )  int tok ; tok = XmlPrologTok ( encoding , s , end , & next ); return doProlog ( parser , encoding , s , end , tok , next , nextPtr , ( XML_Bool ) ! ps_finalBuffer ) ; static enum doProlog(XML_Parser const ENCODING const char const char int const char const char XML_Bool haveMore) static const XML_Char externalSubsetName [ ] = { '#' , '\0' } ; static const XML_Char atypeCDATA [ ] = { 'C' , 'D' , 'A' , 'T' , 'A' , '\0' } ; static const XML_Char atypeID [ ] = { 'I' , 'D' , '\0' } ; static const XML_Char atypeIDREF [ ] = { 'I' , 'D' , 'R' , 'E' , 'F' , '\0' } ; static const XML_Char atypeIDREFS [ ] = { 'I' , 'D' , 'R' , 'E' , 'F' , 'S' , '\0' } ; static const XML_Char atypeENTITY [ ] = { 'E' , 'N' , 'T' , 'I' , 'T' , 'Y' , '\0' } ; static const XML_Char atypeENTITIES [ ] = { 'E' , 'N' , 'T' , 'I' , 'T' , 'I' , 'E' , 'S' , '\0' } ; static const XML_Char atypeNMTOKEN [ ] = { 'N' , 'M' , 'T' , 'O' , 'K' , 'E' , 'N' , '\0' } ; static const XML_Char atypeNMTOKENS [ ] = { 'N' , 'M' , 'T' , 'O' , 'K' , 'E' , 'N' , 'S' , '\0' } ; static const XML_Char notationPrefix [ ] = { 'N' , 'O' , 'T' , 'A' , 'T' , 'I' , 'O' , 'N' , '(' , '\0' } ; static const XML_Char enumValueSep [ ] = { '|' , '\0' } ; static const XML_Char enumValueStart [ ] = { '(' , '\0' } ; DTD * const dtd = _dtd const char * * eventPP ; enum XML_Content_Quant quant ; if ( enc == encoding )  eventPP = & eventPtr; eventPP = & ( openInternalEntities -> internalEventPtr ); int role ; XML_Bool handleDefault = XML_TRUE ; * eventPP = s; if ( tok <= 0 )  if ( haveMore && tok != XML_TOK_INVALID )  switch ( tok )  * eventPP = next; if ( enc != encoding && ! openInternalEntities -> betweenDecl )  * nextPtr = s; if ( isParamEntity || enc != encoding )  if ( XmlTokenRole ( & prologState , XML_TOK_NONE , end , end , enc ) == XML_ROLE_ERROR )  * nextPtr = s; tok = - tok; next = end; role = XmlTokenRole ( & prologState , tok , s , next , enc ); switch ( role )  enum XML_Error result = processXmlDecl ( parser , 0 , s , next ) ; if ( result != XML_ERROR_NONE )  enc = encoding; handleDefault = XML_FALSE; if ( startDoctypeDeclHandler )  doctypeName = poolStoreString ( & tempPool , enc , s , next ); if ( ! doctypeName )  doctypePubid = NULL; handleDefault = XML_FALSE; doctypeSysid = NULL; if ( startDoctypeDeclHandler )  doctypeName = NULL; handleDefault = XML_FALSE; enum XML_Error result = processXmlDecl ( parser , 1 , s , next ) ; if ( result != XML_ERROR_NONE )  enc = encoding; handleDefault = XML_FALSE; useForeignDTD = XML_FALSE; declEntity = ( ENTITY * ) lookup ( & dtd -> paramEntities , externalSubsetName , sizeof ( ENTITY ) ); if ( ! declEntity )  dtd -> hasParamEntityRefs = XML_TRUE; if ( startDoctypeDeclHandler )  if ( ! XmlIsPublicId ( enc , s , next , eventPP ) )  doctypePubid = poolStoreString ( & tempPool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! doctypePubid )  if ( ! XmlIsPublicId ( enc , s , next , eventPP ) )  if ( dtd -> keepProcessing && declEntity )  XML_Char * tem = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ! tem )  declEntity -> publicId = tem; if ( entityDeclHandler )  handleDefault = XML_FALSE; if ( doctypeName )  handleDefault = XML_FALSE; if ( doctypeSysid || useForeignDTD )  XML_Bool hadParamEntityRefs = dtd -> hasParamEntityRefs ; dtd -> hasParamEntityRefs = XML_TRUE; if ( paramEntityParsing && externalEntityRefHandler )  ENTITY * entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , externalSubsetName , sizeof ( ENTITY ) ) ; if ( ! entity )  if ( useForeignDTD )  entity -> base = curBase; dtd -> paramEntityRead = XML_FALSE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  if ( dtd -> paramEntityRead )  if ( ! dtd -> standalone && notStandaloneHandler && ! notStandaloneHandler ( handlerArg ) )  if ( ! doctypeSysid )  dtd -> hasParamEntityRefs = hadParamEntityRefs; useForeignDTD = XML_FALSE; if ( endDoctypeDeclHandler )  handleDefault = XML_FALSE; if ( useForeignDTD )  XML_Bool hadParamEntityRefs = dtd -> hasParamEntityRefs ; dtd -> hasParamEntityRefs = XML_TRUE; if ( paramEntityParsing && externalEntityRefHandler )  ENTITY * entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , externalSubsetName , sizeof ( ENTITY ) ) ; if ( ! entity )  entity -> base = curBase; dtd -> paramEntityRead = XML_FALSE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  if ( dtd -> paramEntityRead )  dtd -> hasParamEntityRefs = hadParamEntityRefs; declElementType = getElementType ( parser , enc , s , next ); if ( ! declElementType )  declAttributeId = getAttributeId ( parser , enc , s , next ); if ( ! declAttributeId )  declAttributeIsCdata = XML_FALSE; declAttributeType = NULL; declAttributeIsId = XML_FALSE; declAttributeIsCdata = XML_TRUE; declAttributeType = atypeCDATA; declAttributeIsId = XML_TRUE; declAttributeType = atypeID; declAttributeType = atypeIDREF; declAttributeType = atypeIDREFS; declAttributeType = atypeENTITY; declAttributeType = atypeENTITIES; declAttributeType = atypeNMTOKEN; declAttributeType = atypeNMTOKENS; if ( dtd -> keepProcessing && attlistDeclHandler )  handleDefault = XML_FALSE; if ( dtd -> keepProcessing && attlistDeclHandler )  const XML_Char * prefix ; if ( declAttributeType )  prefix = enumValueSep; prefix = ( role == XML_ROLE_ATTRIBUTE_NOTATION_VALUE ? notationPrefix : enumValueStart ); if ( ! poolAppendString ( & tempPool , prefix ) )  if ( ! poolAppend ( & tempPool , enc , s , next ) )  declAttributeType = tempPool . start; handleDefault = XML_FALSE; if ( dtd -> keepProcessing )  if ( ! defineAttribute ( declElementType , declAttributeId , declAttributeIsCdata , declAttributeIsId , 0 , parser ) )  if ( attlistDeclHandler && declAttributeType )  if ( * declAttributeType == XML_T ( '(' ) || ( * declAttributeType == XML_T ( 'N' ) && declAttributeType [ 1 ] == XML_T ( 'O' ) ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( ')' ) ) || ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  declAttributeType = tempPool . start; handleDefault = XML_FALSE; if ( dtd -> keepProcessing )  const XML_Char * attVal ; enum XML_Error result = storeAttributeValue ( parser , enc , declAttributeIsCdata , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar , & dtd -> pool ) ; if ( result )  attVal = poolStart ( & dtd -> pool ); if ( ! defineAttribute ( declElementType , declAttributeId , declAttributeIsCdata , XML_FALSE , attVal , parser ) )  if ( attlistDeclHandler && declAttributeType )  if ( * declAttributeType == XML_T ( '(' ) || ( * declAttributeType == XML_T ( 'N' ) && declAttributeType [ 1 ] == XML_T ( 'O' ) ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( ')' ) ) || ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  declAttributeType = tempPool . start; handleDefault = XML_FALSE; if ( dtd -> keepProcessing )  enum XML_Error result = storeEntityValue ( parser , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( declEntity )  declEntity -> textPtr = poolStart ( & dtd -> entityValuePool ); declEntity -> textLen = ( int ) ( poolLength ( & dtd -> entityValuePool ) ); if ( result != XML_ERROR_NONE )  dtd -> hasParamEntityRefs = XML_TRUE; if ( startDoctypeDeclHandler )  doctypeSysid = poolStoreString ( & tempPool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( doctypeSysid == NULL )  handleDefault = XML_FALSE; && ! paramEntityParsing if ( dtd -> keepProcessing && declEntity )  declEntity -> systemId = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! declEntity -> systemId )  declEntity -> base = curBase; if ( entityDeclHandler )  handleDefault = XML_FALSE; if ( dtd -> keepProcessing && declEntity && entityDeclHandler )  handleDefault = XML_FALSE; if ( dtd -> keepProcessing && declEntity )  declEntity -> notation = poolStoreString ( & dtd -> pool , enc , s , next ); if ( ! declEntity -> notation )  if ( unparsedEntityDeclHandler )  handleDefault = XML_FALSE; if ( entityDeclHandler )  handleDefault = XML_FALSE; if ( XmlPredefinedEntityName ( enc , s , next ) )  declEntity = NULL; if ( dtd -> keepProcessing )  const XML_Char * name = poolStoreString ( & dtd -> pool , enc , s , next ) ; if ( ! name )  declEntity = ( ENTITY * ) lookup ( & dtd -> generalEntities , name , sizeof ( ENTITY ) ); if ( ! declEntity )  if ( declEntity -> name != name )  declEntity = NULL; declEntity -> publicId = NULL; declEntity -> is_param = XML_FALSE; declEntity -> is_internal = ! ( parentParser || openInternalEntities ); if ( entityDeclHandler )  handleDefault = XML_FALSE; declEntity = NULL; if ( dtd -> keepProcessing )  const XML_Char * name = poolStoreString ( & dtd -> pool , enc , s , next ) ; if ( ! name )  declEntity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , sizeof ( ENTITY ) ); if ( ! declEntity )  if ( declEntity -> name != name )  declEntity = NULL; declEntity -> publicId = NULL; declEntity -> is_param = XML_TRUE; declEntity -> is_internal = ! ( parentParser || openInternalEntities ); if ( entityDeclHandler )  handleDefault = XML_FALSE; declEntity = NULL; declNotationPublicId = NULL; declNotationName = NULL; if ( notationDeclHandler )  declNotationName = poolStoreString ( & tempPool , enc , s , next ); if ( ! declNotationName )  handleDefault = XML_FALSE; if ( ! XmlIsPublicId ( enc , s , next , eventPP ) )  if ( declNotationName )  XML_Char * tem = poolStoreString ( & tempPool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ! tem )  declNotationPublicId = tem; handleDefault = XML_FALSE; if ( declNotationName && notationDeclHandler )  const XML_Char * systemId = poolStoreString ( & tempPool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ) ; if ( ! systemId )  handleDefault = XML_FALSE; if ( declNotationPublicId && notationDeclHandler )  handleDefault = XML_FALSE; enum XML_Error result ; handleDefault = XML_FALSE; result = doIgnoreSection ( parser , enc , & next , end , nextPtr , haveMore ); if ( result != XML_ERROR_NONE )  if ( ! next )  if ( prologState . level >= groupSize )  if ( groupSize )  char * temp = ( char * ) REALLOC ( groupConnector , groupSize *= 2 ) ; if ( temp == NULL )  groupConnector = temp; if ( dtd -> scaffIndex )  int * temp = ( int * ) REALLOC ( dtd -> scaffIndex , groupSize * sizeof ( int ) ) ; if ( temp == NULL )  dtd -> scaffIndex = temp; groupConnector = ( char * ) MALLOC ( groupSize = 32 ); if ( ! groupConnector )  groupConnector [ prologState . level ] = 0; if ( dtd -> in_eldecl )  int myindex = nextScaffoldPart ( parser ) ; if ( myindex < 0 )  dtd -> scaffIndex [ dtd -> scaffLevel ] = myindex; dtd -> scaffLevel ++; dtd -> scaffold [ myindex ] . type = XML_CTYPE_SEQ; if ( elementDeclHandler )  handleDefault = XML_FALSE; if ( groupConnector [ prologState . level ] == '|' )  groupConnector [ prologState . level ] = ','; if ( dtd -> in_eldecl && elementDeclHandler )  handleDefault = XML_FALSE; if ( groupConnector [ prologState . level ] == ',' )  if ( dtd -> in_eldecl && ! groupConnector [ prologState . level ] && ( dtd -> scaffold [ dtd -> scaffIndex [ dtd -> scaffLevel - 1 ] ] . type != XML_CTYPE_MIXED ) )  dtd -> scaffold [ dtd -> scaffIndex [ dtd -> scaffLevel - 1 ] ] . type = XML_CTYPE_CHOICE; if ( elementDeclHandler )  handleDefault = XML_FALSE; groupConnector [ prologState . level ] = '|'; dtd -> hasParamEntityRefs = XML_TRUE; if ( ! paramEntityParsing )  dtd -> keepProcessing = dtd -> standalone; const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & dtd -> pool , enc , s + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( prologState . documentEntity && ( dtd -> standalone ? ! openInternalEntities : ! dtd -> hasParamEntityRefs ) )  if ( ! entity )  if ( ! entity -> is_internal )  if ( ! entity )  dtd -> keepProcessing = dtd -> standalone; if ( entity -> open )  if ( entity -> textPtr )  enum XML_Error result ; XML_Bool betweenDecl = ( role == XML_ROLE_PARAM_ENTITY_REF ? XML_TRUE : XML_FALSE ) ; result = processInternalEntity ( parser , entity , betweenDecl ); if ( result != XML_ERROR_NONE )  handleDefault = XML_FALSE; if ( externalEntityRefHandler )  dtd -> paramEntityRead = XML_FALSE; entity -> open = XML_TRUE; entity -> open = XML_FALSE; entity -> open = XML_FALSE; handleDefault = XML_FALSE; if ( ! dtd -> paramEntityRead )  dtd -> keepProcessing = dtd -> standalone; dtd -> keepProcessing = dtd -> standalone; if ( ! dtd -> standalone && notStandaloneHandler && ! notStandaloneHandler ( handlerArg ) )  if ( elementDeclHandler )  declElementType = getElementType ( parser , enc , s , next ); if ( ! declElementType )  dtd -> scaffLevel = 0; dtd -> scaffCount = 0; dtd -> in_eldecl = XML_TRUE; handleDefault = XML_FALSE; if ( dtd -> in_eldecl )  if ( elementDeclHandler )  XML_Content * content = ( XML_Content * ) MALLOC ( sizeof ( XML_Content ) ) ; if ( ! content )  handleDefault = XML_FALSE; dtd -> in_eldecl = XML_FALSE; if ( dtd -> in_eldecl )  dtd -> scaffold [ dtd -> scaffIndex [ dtd -> scaffLevel - 1 ] ] . type = XML_CTYPE_MIXED; if ( elementDeclHandler )  handleDefault = XML_FALSE; quant = XML_CQUANT_NONE; quant = XML_CQUANT_OPT; quant = XML_CQUANT_REP; quant = XML_CQUANT_PLUS; if ( dtd -> in_eldecl )  ELEMENT_TYPE * el ; const XML_Char * name ; int nameLen ; const char * nxt = ( quant == XML_CQUANT_NONE ? next : next - enc -> minBytesPerChar ) ; int myindex = nextScaffoldPart ( parser ) ; if ( myindex < 0 )  dtd -> scaffold [ myindex ] . type = XML_CTYPE_NAME; dtd -> scaffold [ myindex ] . quant = quant; el = getElementType ( parser , enc , s , nxt ); if ( ! el )  name = el -> name; dtd -> scaffold [ myindex ] . name = name; nameLen = 0; for (; name[nameLen++]; ); dtd -> contentStringLen += nameLen; if ( elementDeclHandler )  handleDefault = XML_FALSE; quant = XML_CQUANT_NONE; quant = XML_CQUANT_OPT; quant = XML_CQUANT_REP; quant = XML_CQUANT_PLUS; if ( dtd -> in_eldecl )  if ( elementDeclHandler )  handleDefault = XML_FALSE; dtd -> scaffLevel --; dtd -> scaffold [ dtd -> scaffIndex [ dtd -> scaffLevel ] ] . quant = quant; if ( dtd -> scaffLevel == 0 )  if ( ! handleDefault )  XML_Content * model = build_model ( parser ) ; if ( ! model )  dtd -> in_eldecl = XML_FALSE; dtd -> contentStringLen = 0; if ( ! reportProcessingInstruction ( parser , enc , s , next ) )  if ( ! reportComment ( parser , enc , s , next ) )  switch ( ps_parsing )  s = next; tok = XmlPrologTok ( enc , s , end , & next ); static XML_Char poolAppend(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! pool -> ptr && ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  if ( pool -> blocks && pool -> start == pool -> blocks -> s )  BLOCK * tem ; int blockSize = ( int ) ( pool -> end - pool -> start ) ; if ( blockSize < INIT_BLOCK_SIZE )  blockSize = INIT_BLOCK_SIZE; blockSize *= 2; tem = ( BLOCK * ) pool -> mem -> malloc_fcn ( offsetof ( BLOCK , s ) + blockSize * sizeof ( XML_Char ) ); if ( ! tem )  tem -> size = blockSize; tem -> next = pool -> blocks; pool -> blocks = tem; if ( pool -> ptr != pool -> start )  memcpy ( tem -> s , pool -> start , ( pool -> ptr - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = tem -> s + ( pool -> ptr - pool -> start ); pool -> start = tem -> s; pool -> end = tem -> s + blockSize; 