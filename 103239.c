 ArrayType::Setter(JSContext* cx, HandleObject obj, HandleId idval, bool strict, MutableHandleValue vp) if ( ! CData :: IsCData ( obj ) )   CData::IsCData(JSObject* obj) return JS_GetClass ( obj ) == & sCDataClass ; JSObject * typeObj = CData :: GetCType ( obj ) ;  CData::GetCType(JSObject* dataObj) jsval slot = JS_GetReservedSlot ( dataObj , SLOT_CTYPE ) ; JSObject * typeObj = slot . toObjectOrNull ( ) ; return typeObj ; if ( CType :: GetTypeCode ( typeObj ) != TYPE_array )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; size_t index ; size_t length = GetLength ( typeObj ) ; bool ok = jsidToSize ( cx , idval , true , & index ) ; static jsidToSize(JSContext* cx, jsid val, bool allowString, size_t* result) if ( ! jsidToBigInteger ( cx , val , allowString , result ) )  template<class static jsidToBigInteger(JSContext* jsid bool IntegerType* result) if ( JSID_IS_INT ( val ) )  int32_t i = JSID_TO_INT ( val ) ; return ConvertExact ( i , result ) ; template<class TargetType, class static MOZ_ALWAYS_INLINE bool ConvertExact(FromType i, TargetType* result) return true ; if ( allowString && JSID_IS_STRING ( val ) )  return StringToInteger ( cx , JSID_TO_STRING ( val ) , result ) ; template <class IntegerType, class static StringToInteger(JSContext* cx, CharT* cp, size_t length, IntegerType* result) const CharT * end = cp + length ; if ( cp == end )  return false ; IntegerType sign = 1 ; if ( cp [ 0 ] == '-' )  return false ; sign = - 1; IntegerType base = 10 ; if ( end - cp > 2 && cp [ 0 ] == '0' && ( cp [ 1 ] == 'x' || cp [ 1 ] == 'X' ) )  cp += 2; base = 16; IntegerType i = 0 ; while ( cp != end )  char16_t c = * cp ++ ; if ( c >= '0' && c <= '9' )  c -= '0'; if ( base == 16 && c >= 'a' && c <= 'f' )  c = c - 'a' + 10; if ( base == 16 && c >= 'A' && c <= 'F' )  c = c - 'A' + 10; return false ; IntegerType ii = i ; i = ii * base + sign * c; if ( i / base != ii )  return false ; return true ; return false ; return false ; return Convert < size_t > ( double ( * result ) ) == * result ; int32_t dummy ; if ( ! ok && JSID_IS_STRING ( idval ) && ! StringToInteger ( cx , JSID_TO_STRING ( idval ) , & dummy ) )  template <class IntegerType, class static StringToInteger(JSContext* cx, CharT* cp, size_t length, IntegerType* result) const CharT * end = cp + length ; if ( cp == end )  return false ; IntegerType sign = 1 ; if ( cp [ 0 ] == '-' )  return false ; sign = - 1; IntegerType base = 10 ; if ( end - cp > 2 && cp [ 0 ] == '0' && ( cp [ 1 ] == 'x' || cp [ 1 ] == 'X' ) )  cp += 2; base = 16; IntegerType i = 0 ; while ( cp != end )  char16_t c = * cp ++ ; if ( c >= '0' && c <= '9' )  c -= '0'; if ( base == 16 && c >= 'a' && c <= 'f' )  c = c - 'a' + 10; if ( base == 16 && c >= 'A' && c <= 'F' )  c = c - 'A' + 10; return false ; IntegerType ii = i ; i = ii * base + sign * c; if ( i / base != ii )  return false ; return true ; if ( ! ok || index >= length )  JSObject * baseType = GetBaseType ( typeObj ) ; char * data = static_cast < char * > ( CData :: GetData ( obj ) ) + elementSize * index  CData::GetData(JSObject* dataObj) void * * buffer = static_cast < void * * > slot . toPrivate ( ) return * buffer ; return ImplicitConvert ( cx , vp , baseType , data , false , nullptr ) ; static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  size_t size = CType :: GetSize ( sourceType ) ; memmove ( buffer , CData :: GetData ( sourceData ) , size ); 