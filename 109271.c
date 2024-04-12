proto_item proto_tree_add_bitmask_value(proto_tree *parent_tree, tvbuff_t *tvb, const guint const int hf_hdr, const gint ett, const int **fields, const guint64 value) return proto_tree_add_bitmask_value_with_flags ( parent_tree , tvb , offset , hf_hdr , ett , fields , value , BMT_NO_INT | BMT_NO_TFS ) ; WS_DLL_PUBLIC proto_item proto_tree_add_bitmask_value_with_flags(proto_tree *parent_tree, tvbuff_t *tvb, const guint const int hf_hdr, const gint ett, const int **fields, const guint64 value, const int flags) header_field_info * hf ; int len ; len = ftype_length ( hf -> type ); if ( parent_tree )  if ( len <= 4 )  item = proto_tree_add_uint ( parent_tree , hf_hdr , tvb , offset , len , ( guint32 ) value ); item = proto_tree_add_uint64 ( parent_tree , hf_hdr , tvb , offset , len , value ); proto_item_add_bitmask_tree ( item , tvb , offset , len , ett , fields , 0 , flags , FALSE , FALSE , TRUE , NULL , value ); static proto_item_add_bitmask_tree(proto_item *item, tvbuff_t *tvb, const int const int len, const gint ett, const int const guint encoding, const int gboolean first, gboolean use_parent_tree, gboolean proto_tree* tree, guint64 value) guint64 available_bits = 0 ; guint64 tmpval ; header_field_info * hf ; switch ( len )  if ( use_value == FALSE )  value = tvb_get_guint8 ( tvb , offset ); available_bits = 0xFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letohs ( tvb , offset ) : tvb_get_ntohs ( tvb , offset ); available_bits = 0xFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letoh24 ( tvb , offset ) : tvb_get_ntoh24 ( tvb , offset ); available_bits = 0xFFFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letohl ( tvb , offset ) : tvb_get_ntohl ( tvb , offset ); available_bits = 0xFFFFFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letoh40 ( tvb , offset ) : tvb_get_ntoh40 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh48 ( tvb , offset ) : tvb_get_ntoh48 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh56 ( tvb , offset ) : tvb_get_ntoh56 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh64 ( tvb , offset ) : tvb_get_ntoh64 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFFFFFF ); while ( * fields )  guint64 present_bits ; present_bits = available_bits & hf -> bitmask; if ( present_bits != hf -> bitmask )  fields ++; if ( flags & BMT_NO_APPEND )  fields ++; tmpval = ( value & hf -> bitmask ) >> hfinfo_bitshift ( hf ); switch ( hf -> type )  if ( hf -> display == BASE_CUSTOM )  first = FALSE; if ( hf -> strings )  first = FALSE; if ( ! ( flags & BMT_NO_INT ) )  first = FALSE; if ( hf -> strings && ! ( flags & BMT_NO_TFS ) )  const struct true_false_string * tfs = ( const struct true_false_string * ) hf -> strings ; if ( tmpval )  first = FALSE; if ( ! ( flags & BMT_NO_FALSE ) )  proto_item_append_text ( item , "%s%s: %s" , first ? "" : ", " , hf -> name , tfs -> false_string ); first = FALSE; if ( hf -> bitmask & value )  first = FALSE; fields ++;  proto_item_append_text(proto_item *pi, const char *format, ...) size_t curlen ; fi = PITEM_FINFO ( pi ); if ( fi == NULL )  if ( ! PROTO_ITEM_IS_HIDDEN ( pi ) )  curlen = strlen ( fi -> rep -> representation ); if ( ITEM_LABEL_LENGTH > curlen )  g_vsnprintf ( fi -> rep -> representation + curlen , ITEM_LABEL_LENGTH - ( gulong ) curlen , format , ap ); 