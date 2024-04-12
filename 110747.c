 PointerType::ContentsSetter(JSContext* cx, JS::CallArgs args) RootedObject obj ( cx , & args . thisv ( ) . toObject ( ) ) ; RootedObject baseType ( cx , GetBaseType ( CData :: GetCType ( obj ) ) ) ; if ( ! CType :: IsSizeDefined ( baseType ) )  void * data = * static_cast < void * * > CData :: GetData ( obj ) if ( data == nullptr )  return ImplicitConvert ( cx , args . get ( 0 ) , baseType , data , false , nullptr ) ; static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  bool result ; if ( ! jsvalToBool ( cx , val , & result ) )  * static_cast < bool * > ( buffer ) = result type result ; type result ; type result ; if ( ! jsvalToFloat ( cx , val , & result ) )  * static_cast < type * > ( buffer ) = result if ( val . isNull ( ) )  * static_cast < void * * > ( buffer ) = nullptr JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  JSString * sourceString = val . toString ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )  size_t nbytes = GetDeflatedUTF8StringLength ( cx , sourceLinear ) ; if ( nbytes == ( size_t ) - 1 )  if ( targetLength < nbytes )  char * charBuffer = static_cast < char * > buffer if ( val . isObject ( ) && ! sourceData )  AutoIdArray props ( cx , JS_Enumerate ( cx , valObj ) ) ; if ( ! props )  auto intermediate = cx -> make_pod_array < char > ( structSize ) if ( ! intermediate )  const FieldInfoHash * fields = StructType :: GetFieldInfo ( targetType ) ; if ( props . length ( ) != fields -> count ( ) )  RootedId id ( cx ) ; for (size_t i = 0; i < props.length(); ++i) id = props [ i ]; if ( ! JSID_IS_STRING ( id ) )  JSFlatString * name = JSID_TO_FLAT_STRING ( id ) ; const FieldInfo * field = StructType :: LookupField ( cx , targetType , name ) ; if ( ! field )  RootedValue prop ( cx ) ; if ( ! JS_GetPropertyById ( cx , valObj , id , & prop ) )  char * fieldData = intermediate . get ( ) + field -> mOffset ; if ( ! ImplicitConvert ( cx , prop , field -> mType , fieldData , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  uint32_t sourceLength ; if ( ! JS_GetArrayLength ( cx , valObj , & sourceLength ) || targetLength != size_t ( sourceLength ) )  size_t elementSize = CType :: GetSize ( baseType ) ; auto intermediate = cx -> make_pod_array < char > ( arraySize ) if ( ! intermediate )  for (uint32_t i = 0; i < sourceLength; ++i) RootedValue item ( cx ) ; if ( ! JS_GetElement ( cx , valObj , i , & item ) )  char * data = intermediate . get ( ) + elementSize * i ; if ( ! ImplicitConvert ( cx , item , baseType , data , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  bool result ; if ( ! jsvalToBool ( cx , val , & result ) )  * static_cast < bool * > ( buffer ) = result type result ; type result ; type result ; if ( ! jsvalToFloat ( cx , val , & result ) )  * static_cast < type * > ( buffer ) = result if ( val . isNull ( ) )  * static_cast < void * * > ( buffer ) = nullptr JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  JSString * sourceString = val . toString ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )  size_t nbytes = GetDeflatedUTF8StringLength ( cx , sourceLinear ) ; if ( nbytes == ( size_t ) - 1 )  if ( targetLength < nbytes )  char * charBuffer = static_cast < char * > buffer if ( val . isObject ( ) && ! sourceData )  AutoIdArray props ( cx , JS_Enumerate ( cx , valObj ) ) ; if ( ! props )  size_t structSize = CType :: GetSize ( targetType ) ; auto intermediate = cx -> make_pod_array < char > ( structSize ) if ( ! intermediate )  const FieldInfoHash * fields = StructType :: GetFieldInfo ( targetType ) ; if ( props . length ( ) != fields -> count ( ) )  RootedId id ( cx ) ; id = props [ i ]; if ( ! JSID_IS_STRING ( id ) )  JSFlatString * name = JSID_TO_FLAT_STRING ( id ) ; const FieldInfo * field = StructType :: LookupField ( cx , targetType , name ) ; if ( ! field )  RootedValue prop ( cx ) ; if ( ! JS_GetPropertyById ( cx , valObj , id , & prop ) )  char * fieldData = intermediate . get ( ) + field -> mOffset ; if ( ! ImplicitConvert ( cx , prop , field -> mType , fieldData , false , nullptr ) )  memcpy ( buffer , intermediate . get ( ) , structSize ); 