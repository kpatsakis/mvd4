 proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  if ( hfinfo -> bitmask )  fill_label_bitfield ( fi , label_str , FALSE ); static fill_label_bitfield(field_info *fi, gchar *label_str, gboolean is_signed) char * p ; int bitfield_byte_length , bitwidth ; guint32 unshifted_value ; guint32 value ; char buf [ 32 ] ; const char * out ; header_field_info * hfinfo = fi -> hfinfo ; bitwidth = hfinfo_bitwidth ( hfinfo );  hfinfo_bitwidth(const header_field_info *hfinfo) int bitwidth = 0 ; if ( ! hfinfo -> bitmask )  return 0 ; switch ( hfinfo -> type )  bitwidth = 8; bitwidth = 16; bitwidth = 24; bitwidth = 32; bitwidth = 40; bitwidth = 48; bitwidth = 56; bitwidth = 64; bitwidth = hfinfo -> display; return bitwidth ; if ( is_signed )  unshifted_value = fvalue_get_sinteger ( & fi -> value ); unshifted_value = fvalue_get_uinteger ( & fi -> value ); value = unshifted_value; if ( hfinfo -> bitmask )  unshifted_value <<= hfinfo_bitshift ( hfinfo );  hfinfo_bitshift(const header_field_info *hfinfo) return ws_ctz ( hfinfo -> bitmask ) ; p = decode_bitfield_value ( label_str , unshifted_value , hfinfo -> bitmask , bitwidth ); static char decode_bitfield_value(char *buf, const guint64 val, const guint64 mask, const int width) char * p ; p = other_decode_bitfield_value ( buf , val , mask , width ); static char other_decode_bitfield_value(char *buf, const guint64 val, const guint64 mask, const int width) int i ; guint64 bit ; char * p ; i = 0; p = buf; bit = G_GUINT64_CONSTANT ( 1 ) << ( width - 1 ); if ( mask & bit )  if ( val & bit )  * p ++ = '1'; * p ++ = '0'; * p ++ = '.'; bit >>= 1; i ++; if ( i >= width )  if ( i % 4 == 0 )  * p ++ = ' '; * p = '\0'; return p ; p = g_stpcpy ( p , " = " ); return p ; bitfield_byte_length = ( int ) ( p - label_str ); if ( hfinfo -> display == BASE_CUSTOM )  if ( hfinfo -> strings )  out = hfinfo_number_vals_format ( hfinfo , buf , value ); static const char hfinfo_number_vals_format(const header_field_info *hfinfo, char buf[32], guint32 value) int display = hfinfo -> display & FIELD_DISPLAY_E_MASK ; if ( display == BASE_NONE )  return NULL ; if ( display == BASE_DEC_HEX )  display = BASE_DEC; if ( display == BASE_HEX_DEC )  display = BASE_HEX; return hfinfo_number_value_format_display ( hfinfo , display , buf , value ) ; static const char hfinfo_number_value_format_display(const header_field_info *hfinfo, int display, char buf[32], guint32 value) char * ptr = & buf [ 31 ] ; gboolean isint = IS_FT_INT ( hfinfo -> type ) ; * ptr = '\0'; switch ( display & FIELD_DISPLAY_E_MASK )  return isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ) ; * ( -- ptr ) = ')'; ptr = hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ); static _hfinfo_type_hex_octet(int type) switch ( type )  return 2 ; return 4 ; return 6 ; return 8 ; return 10 ; return 12 ; return 14 ; return 16 ; return - 1 ; * ( -- ptr ) = '('; * ( -- ptr ) = ' '; ptr = isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ); return ptr ; return oct_to_str_back ( ptr , value ) ; return hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ) ; static _hfinfo_type_hex_octet(int type) switch ( type )  return 2 ; return 4 ; return 6 ; return 8 ; return 10 ; return 12 ; return 14 ; return 16 ; return - 1 ; * ( -- ptr ) = ')'; ptr = isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ); * ( -- ptr ) = '('; * ( -- ptr ) = ' '; ptr = hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ); static _hfinfo_type_hex_octet(int type) switch ( type )  return 2 ; return 4 ; return 6 ; return 8 ; return 10 ; return 12 ; return 14 ; return 16 ; return - 1 ; return ptr ; return buf ; return ptr ; out = hfinfo_number_value_format ( hfinfo , buf , value ); static const char hfinfo_number_value_format(const header_field_info *hfinfo, char buf[32], guint32 value) int display = hfinfo -> display ; if ( hfinfo -> type == FT_FRAMENUM )  display = BASE_DEC; return hfinfo_number_value_format_display ( hfinfo , display , buf , value ) ; static const char hfinfo_number_value_format_display(const header_field_info *hfinfo, int display, char buf[32], guint32 value) char * ptr = & buf [ 31 ] ; gboolean isint = IS_FT_INT ( hfinfo -> type ) ; * ptr = '\0'; switch ( display & FIELD_DISPLAY_E_MASK )  return isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ) ; * ( -- ptr ) = ')'; ptr = hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ); * ( -- ptr ) = '('; * ( -- ptr ) = ' '; ptr = isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ); return ptr ; return oct_to_str_back ( ptr , value ) ; return hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ) ; * ( -- ptr ) = ')'; ptr = isint ? int_to_str_back ( ptr , ( gint32 ) value ) : uint_to_str_back ( ptr , value ); * ( -- ptr ) = '('; * ( -- ptr ) = ' '; ptr = hex_to_str_back ( ptr , _hfinfo_type_hex_octet ( hfinfo -> type ) , value ); return ptr ; return buf ; return ptr ; label_fill ( label_str , bitfield_byte_length , hfinfo , out ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); static inline label_concat(char *label_str, gsize pos, const char *str) if ( pos < ITEM_LABEL_LENGTH )  pos += g_strlcpy ( label_str + pos , str , ITEM_LABEL_LENGTH - pos ); return pos ; pos = label_concat ( label_str , pos , ": " ); static inline label_concat(char *label_str, gsize pos, const char *str) if ( pos < ITEM_LABEL_LENGTH )  pos += g_strlcpy ( label_str + pos , str , ITEM_LABEL_LENGTH - pos ); return pos ; pos = label_concat ( label_str , pos , text ? text : "(null)" ); static inline label_concat(char *label_str, gsize pos, const char *str) if ( pos < ITEM_LABEL_LENGTH )  pos += g_strlcpy ( label_str + pos , str , ITEM_LABEL_LENGTH - pos ); return pos ; if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 