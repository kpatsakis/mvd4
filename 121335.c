 CType::ConstructBasic(JSContext* HandleObject const CallArgs& args) if ( args . length ( ) > 1 )  RootedObject result ( cx , CData :: Create ( cx , obj , NullPtr ( ) , nullptr , true ) ) ;  CData::Create(JSContext* HandleObject HandleObject void* bool ownResult) jsval slot = JS_GetReservedSlot ( typeObj , SLOT_PROTO ) ; RootedObject proto ( cx , & slot . toObject ( ) ) ; RootedObject parent ( cx , JS_GetParent ( typeObj ) ) ; RootedObject dataObj ( cx , JS_NewObjectWithGivenProto ( cx , & sCDataClass , proto , parent ) ) ; if ( ! dataObj )  return nullptr ; char * * buffer = cx -> new_ < char * > ( ) if ( ! buffer )  return nullptr ; char * data ; if ( ! ownResult )  data = static_cast < char * > source size_t size = CType :: GetSize ( typeObj ) ; data = dataObj -> zone ( ) -> pod_malloc < char > ( size ); if ( ! data )  return nullptr ; return dataObj ; if ( ! result )  if ( args . length ( ) == 1 )  if ( ! ExplicitConvert ( cx , args [ 0 ] , obj , CData :: GetData ( result ) ) )  static ExplicitConvert(JSContext* cx, HandleValue val, HandleObject targetType, void* buffer) if ( ImplicitConvert ( cx , val , targetType , buffer , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  size_t size = CType :: GetSize ( sourceType ) ; memmove ( buffer , CData :: GetData ( sourceData ) , size ); 