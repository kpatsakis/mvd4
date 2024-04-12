 ArrayType::Setter(JSContext* cx, HandleObject obj, HandleId idval, bool strict, MutableHandleValue vp) if ( ! CData :: IsCData ( obj ) )  JSObject * typeObj = CData :: GetCType ( obj ) ; if ( CType :: GetTypeCode ( typeObj ) != TYPE_array )  size_t index ; size_t length = GetLength ( typeObj ) ; bool ok = jsidToSize ( cx , idval , true , & index ) ; int32_t dummy ; if ( ! ok && JSID_IS_STRING ( idval ) && ! StringToInteger ( cx , JSID_TO_STRING ( idval ) , & dummy ) )  if ( ! ok || index >= length )  JSObject * baseType = GetBaseType ( typeObj ) ; char * data = static_cast < char * > ( CData :: GetData ( obj ) ) + elementSize * index return ImplicitConvert ( cx , vp , baseType , data , false , nullptr ) ; static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  uint32_t sourceLength ; if ( ! JS_GetArrayLength ( cx , valObj , & sourceLength ) || targetLength != size_t ( sourceLength ) )  size_t elementSize = CType :: GetSize ( baseType ) ; auto intermediate = cx -> make_pod_array < char > ( arraySize ) if ( ! intermediate )  for (uint32_t i = 0; i < sourceLength; ++i) RootedValue item ( cx ) ; if ( ! JS_GetElement ( cx , valObj , i , & item ) )  char * data = intermediate . get ( ) + elementSize * i ; if ( ! ImplicitConvert ( cx , item , baseType , data , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  size_t size = CType :: GetSize ( sourceType ) ; memmove ( buffer , CData :: GetData ( sourceData ) , size ); 