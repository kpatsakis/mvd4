void emem_tree_insert_string(emem_tree_t *se_tree,const gchar *k,void *v,guint32 flags) emem_tree_key_t key [ 2 ] ; guint32 len = ( guint32 ) ( strlen ( k ) ) ; guint32 divx = ( len + 3 ) / 4 + 1 ; guint32 i ; guint32 tmp ; aligned = ( g_malloc ( divx * sizeof ( guint32 ) ) ); tmp = 0; for (i = 0; i < len; i++) unsigned char ch ; ch = ( ( unsigned char ) k [ i ] ); if ( flags & 0x1 )  if ( ( * __ctype_b_loc ( ) ) [ ( int ) ch ] & ( ( unsigned short ) _ISupper ) )  ch = ( tolower ( ch ) ); tmp <<= 8; tmp |= ch; if ( i % 4 == 3 )  aligned [ i / 4 ] = tmp; tmp = 0; if ( i % 4 != 0 )  while ( i % 4 != 0 )  i ++; tmp <<= 8; aligned [ i / 4 - 1 ] = tmp; aligned [ divx - 1 ] = 0x1; key [ 0 ] . length = divx; key [ 0 ] . key = aligned; key [ 1 ] . length = 0; key [ 1 ] . key = ( ( void * ) 0 ); emem_tree_insert32_array ( se_tree , key , v ); void emem_tree_insert32_array(emem_tree_t *se_tree,emem_tree_key_t *key,void *data) emem_tree_t * insert_tree = ( ( void * ) 0 ) ; emem_tree_key_t * cur_key ; guint32 i ; guint32 insert_key32 = 0 ; if ( ! se_tree || ! key )  for (cur_key = key; cur_key -> length > 0; cur_key++) for (i = 0; i < cur_key -> length; i++) if ( ! insert_tree )  insert_tree = se_tree; insert_tree = ( lookup_or_insert32 ( insert_tree , insert_key32 , create_sub_tree , se_tree , 1 ) ); static void *lookup_or_insert32(emem_tree_t *se_tree,guint32 key,void *(*func)(void *),void *ud,int is_subtree) emem_tree_node_t * node ; node = se_tree -> tree; if ( ! node )  node = ( ( se_tree -> malloc ) ( sizeof ( emem_tree_node_t ) ) ); switch ( se_tree -> type )  node -> u . rb_color = 1; node -> parent = ( ( void * ) 0 ); node -> left = ( ( void * ) 0 ); node -> right = ( ( void * ) 0 ); node -> key32 = key; node -> data = func ( ud ); node -> u . is_subtree = is_subtree; se_tree -> tree = node; return node -> data ; while ( 1 )  if ( key == node -> key32 )  return node -> data ; if ( key < node -> key32 )  if ( ! node -> left )  emem_tree_node_t * new_node ; new_node = ( ( se_tree -> malloc ) ( sizeof ( emem_tree_node_t ) ) ); node -> left = new_node; new_node -> parent = node; new_node -> left = ( ( void * ) 0 ); new_node -> right = ( ( void * ) 0 ); new_node -> key32 = key; new_node -> data = func ( ud ); new_node -> u . is_subtree = is_subtree; node = new_node; node = node -> left; if ( key > node -> key32 )  if ( ! node -> right )  emem_tree_node_t * new_node ; new_node = ( ( se_tree -> malloc ) ( sizeof ( emem_tree_node_t ) ) ); node -> right = new_node; new_node -> parent = node; new_node -> left = ( ( void * ) 0 ); new_node -> right = ( ( void * ) 0 ); new_node -> key32 = key; new_node -> data = func ( ud ); new_node -> u . is_subtree = is_subtree; node = new_node; node = node -> right; switch ( se_tree -> type )  node -> u . rb_color = 0; return node -> data ; insert_key32 = cur_key -> key [ i ]; if ( ! insert_tree )  getenv ( "WIRESHARK_ABORT_ON_DISSECTOR_BUG" ) != ( ( void * ) 0 ) ? abort ( ) : except_throw ( 1 , 4 , ( ep_strdup_printf ( "%s:%u: failed assertion \"DISSECTOR_ASSERT_NOT_REACHED\"" , "emem.c" , 1872 ) ) ); gchar *ep_strdup_printf(const gchar *fmt,... ) va_list ap ; gchar * dst ; dst = ep_strdup_vprintf ( fmt , ap ); gchar *ep_strdup_vprintf(const gchar *fmt,va_list ap) return emem_strdup_vprintf ( fmt , ap , ep_alloc ) ; static gchar *emem_strdup_vprintf(const gchar *fmt,va_list ap,void *allocator(size_t )) gsize len ; gchar * dst ; len = g_printf_string_upper_bound ( fmt , ap ); dst = ( allocator ( len + 1 ) ); return dst ; return dst ; 