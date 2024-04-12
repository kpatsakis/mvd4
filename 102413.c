 ArrayType::ConstructData(JSContext* HandleObject const CallArgs& args) RootedObject obj ( cx , obj_ ) ; if ( ! CType :: IsCType ( obj ) || CType :: GetTypeCode ( obj ) != TYPE_array )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ;  CType::IsCType(JSObject* obj) return JS_GetClass ( obj ) == & sCTypeClass ; bool convertObject = args . length ( ) == 1 ; if ( CType :: IsSizeDefined ( obj ) )   CType::IsSizeDefined(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; return ! size . isUndefined ( ) ; if ( args . length ( ) > 1 )  if ( args . length ( ) != 1 )  RootedObject baseType ( cx , GetBaseType ( obj ) ) ; size_t length ; if ( jsvalToSize ( cx , args [ 0 ] , false , & length ) )  static jsvalToSize(JSContext* cx, jsval val, bool allowString, size_t* result) if ( ! jsvalToBigInteger ( cx , val , allowString , result ) )  template<class static jsvalToBigInteger(JSContext* jsval bool IntegerType* result) if ( val . isInt32 ( ) )  int32_t i = val . toInt32 ( ) ; return ConvertExact ( i , result ) ; template<class TargetType, class static MOZ_ALWAYS_INLINE bool ConvertExact(FromType i, TargetType* result) return true ; if ( val . isDouble ( ) )  double d = val . toDouble ( ) ; return ConvertExact ( d , result ) ; template<class TargetType, class static MOZ_ALWAYS_INLINE bool ConvertExact(FromType i, TargetType* result) return true ; if ( allowString && val . isString ( ) )  return StringToInteger ( cx , val . toString ( ) , result ) ; template <class IntegerType, class static StringToInteger(JSContext* cx, CharT* cp, size_t length, IntegerType* result) const CharT * end = cp + length ; if ( cp == end )  return false ; IntegerType sign = 1 ; if ( cp [ 0 ] == '-' )  return false ; sign = - 1; IntegerType base = 10 ; if ( end - cp > 2 && cp [ 0 ] == '0' && ( cp [ 1 ] == 'x' || cp [ 1 ] == 'X' ) )  cp += 2; base = 16; IntegerType i = 0 ; while ( cp != end )  char16_t c = * cp ++ ; if ( c >= '0' && c <= '9' )  c -= '0'; if ( base == 16 && c >= 'a' && c <= 'f' )  c = c - 'a' + 10; if ( base == 16 && c >= 'A' && c <= 'F' )  c = c - 'A' + 10; return false ; IntegerType ii = i ; i = ii * base + sign * c; if ( i / base != ii )  return false ; return true ; if ( val . isObject ( ) )  JSObject * obj = & val . toObject ( ) ; if ( UInt64 :: IsUInt64 ( obj ) )   UInt64::IsUInt64(JSObject* obj) return JS_GetClass ( obj ) == & sUInt64Class ; uint64_t i = Int64Base :: GetInt ( obj ) ; return ConvertExact ( i , result ) ; template<class TargetType, class static MOZ_ALWAYS_INLINE bool ConvertExact(FromType i, TargetType* result) return true ; if ( Int64 :: IsInt64 ( obj ) )   Int64::IsInt64(JSObject* obj) return JS_GetClass ( obj ) == & sInt64Class ; int64_t i = Int64Base :: GetInt ( obj ) ; return ConvertExact ( i , result ) ; template<class TargetType, class static MOZ_ALWAYS_INLINE bool ConvertExact(FromType i, TargetType* result) return true ; if ( CDataFinalizer :: IsCDataFinalizer ( obj ) )   CDataFinalizer::IsCDataFinalizer(JSObject* obj) return JS_GetClass ( obj ) == & sCDataFinalizerClass ; RootedValue innerData ( cx ) ; if ( ! CDataFinalizer :: GetValue ( cx , obj , & innerData ) )   CDataFinalizer::GetValue(JSContext* cx, JSObject* obj, MutableHandleValue aResult) CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( obj ) ; if ( ! p )  return false ; RootedObject ctype ( cx , GetCType ( cx , obj ) ) ; return ConvertToJS ( cx , ctype , NullPtr ( ) , p -> cargs , false , true , aResult ) ; return false ; return jsvalToBigInteger ( cx , innerData , allowString , result ) ; template<class static jsvalToBigInteger(JSContext* jsval bool IntegerType* result) if ( val . isInt32 ( ) )  int32_t i = val . toInt32 ( ) ; return ConvertExact ( i , result ) ; if ( val . isDouble ( ) )  double d = val . toDouble ( ) ; return ConvertExact ( d , result ) ; if ( allowString && val . isString ( ) )  return StringToInteger ( cx , val . toString ( ) , result ) ; if ( val . isObject ( ) )  JSObject * obj = & val . toObject ( ) ; if ( UInt64 :: IsUInt64 ( obj ) )  uint64_t i = Int64Base :: GetInt ( obj ) ; return ConvertExact ( i , result ) ; if ( Int64 :: IsInt64 ( obj ) )  int64_t i = Int64Base :: GetInt ( obj ) ; return ConvertExact ( i , result ) ; if ( CDataFinalizer :: IsCDataFinalizer ( obj ) )  RootedValue innerData ( cx ) ; if ( ! CDataFinalizer :: GetValue ( cx , obj , & innerData ) )  return false ; return jsvalToBigInteger ( cx , innerData , allowString , result ) ; return false ; return false ; return false ; return Convert < size_t > ( double ( * result ) ) == * result ; convertObject = false; if ( args [ 0 ] . isObject ( ) )  RootedObject arg ( cx , & args [ 0 ] . toObject ( ) ) ; RootedValue lengthVal ( cx ) ; if ( ! JS_GetProperty ( cx , arg , "length" , & lengthVal ) || ! jsvalToSize ( cx , lengthVal , false , & length ) )  static jsvalToSize(JSContext* cx, jsval val, bool allowString, size_t* result) if ( ! jsvalToBigInteger ( cx , val , allowString , result ) )  return false ; return Convert < size_t > ( double ( * result ) ) == * result ; if ( args [ 0 ] . isString ( ) )  JSString * sourceString = args [ 0 ] . toString ( ) ; size_t sourceLength = sourceString -> length ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; length = GetDeflatedUTF8StringLength ( cx , sourceLinear ); template <typename  GetDeflatedUTF8StringLength(JSContext* maybecx, const CharT* size_t nchars) size_t nbytes ; const CharT * end ; unsigned c , c2 ; nbytes = nchars; for (end = chars + nchars; chars != end; chars++) c = * chars; if ( c < 0x80 )  if ( 0xD800 <= c && c <= 0xDFFF )  chars ++; nbytes --; if ( c >= 0xDC00 || chars == end )  c2 = * chars; if ( c2 < 0xDC00 || c2 > 0xDFFF )  c = ( ( c - 0xD800 ) << 10 ) + ( c2 - 0xDC00 ) + 0x10000; c >>= 11; nbytes ++; while ( c )  c >>= 5; nbytes ++; return nbytes ; return ( size_t ) - 1 ; if ( length == ( size_t ) - 1 )  length = sourceLength + 1; obj = CreateInternal ( cx , baseType , length , true ); if ( ! obj )  JSObject * result = CData :: Create ( cx , obj , NullPtr ( ) , nullptr , true ) ;  CData::Create(JSContext* HandleObject HandleObject void* bool ownResult) jsval slot = JS_GetReservedSlot ( typeObj , SLOT_PROTO ) ; RootedObject proto ( cx , & slot . toObject ( ) ) ; RootedObject parent ( cx , JS_GetParent ( typeObj ) ) ; RootedObject dataObj ( cx , JS_NewObjectWithGivenProto ( cx , & sCDataClass , proto , parent ) ) ; if ( ! dataObj )  return nullptr ; char * * buffer = cx -> new_ < char * > ( ) if ( ! buffer )  return nullptr ; char * data ; if ( ! ownResult )  data = static_cast < char * > source size_t size = CType :: GetSize ( typeObj ) ; data = dataObj -> zone ( ) -> pod_malloc < char > ( size ); if ( ! data )  return nullptr ; return dataObj ; if ( ! result )  if ( convertObject )  if ( ! ExplicitConvert ( cx , args [ 0 ] , obj , CData :: GetData ( result ) ) )  static ExplicitConvert(JSContext* cx, HandleValue val, HandleObject targetType, void* buffer) if ( ImplicitConvert ( cx , val , targetType , buffer , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  bool result ; if ( ! jsvalToBool ( cx , val , & result ) )  * static_cast < bool * > ( buffer ) = result type result ; type result ; type result ; if ( ! jsvalToFloat ( cx , val , & result ) )  * static_cast < type * > ( buffer ) = result if ( val . isNull ( ) )  * static_cast < void * * > ( buffer ) = nullptr JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  JSString * sourceString = val . toString ( ) ; JSLinearString * sourceLinear = sourceString -> ensureLinear ( cx ) ; if ( ! sourceLinear )  switch ( CType :: GetTypeCode ( baseType ) )  size_t nbytes = GetDeflatedUTF8StringLength ( cx , sourceLinear ) ; if ( nbytes == ( size_t ) - 1 )  if ( targetLength < nbytes )  char * charBuffer = static_cast < char * > buffer if ( val . isObject ( ) && ! sourceData )  AutoIdArray props ( cx , JS_Enumerate ( cx , valObj ) ) ; if ( ! props )  size_t structSize = CType :: GetSize ( targetType ) ; auto intermediate = cx -> make_pod_array < char > ( structSize ) if ( ! intermediate )  const FieldInfoHash * fields = StructType :: GetFieldInfo ( targetType ) ; if ( props . length ( ) != fields -> count ( ) )  RootedId id ( cx ) ; for (size_t i = 0; i < props.length(); ++i) id = props [ i ]; if ( ! JSID_IS_STRING ( id ) )  JSFlatString * name = JSID_TO_FLAT_STRING ( id ) ; const FieldInfo * field = StructType :: LookupField ( cx , targetType , name ) ; if ( ! field )  RootedValue prop ( cx ) ; if ( ! JS_GetPropertyById ( cx , valObj , id , & prop ) )  char * fieldData = intermediate . get ( ) + field -> mOffset ; if ( ! ImplicitConvert ( cx , prop , field -> mType , fieldData , false , nullptr ) )  memcpy ( buffer , intermediate . get ( ) , structSize ); 