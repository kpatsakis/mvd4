 nestegg_get_cue_point(nestegg * ctx, unsigned int cluster_num, int64_t int64_t * start_pos, int64_t * end_pos, uint64_t * tstamp) struct ebml_list_node * cues_node = ctx -> segment . cues . cue_point . head ; if ( ! start_pos || ! end_pos || ! tstamp )  if ( ! cues_node )  ne_init_cue_points ( ctx , max_offset ); static ne_init_cue_points(nestegg * ctx, int64_t max_offset) int r ; struct ebml_list_node * node = ctx -> segment . cues . cue_point . head ; struct seek * found ; uint64_t seek_pos , id ; if ( ! node )  found = ne_find_seek_for_id ( ctx -> segment . seek_head . head , ID_CUES ); static struct seek ne_find_seek_for_id(struct ebml_list_node * seek_head, uint64_t id) struct ebml_list * head ; struct ebml_list_node * seek ; struct ebml_binary binary_id ; struct seek * s ; while ( seek_head )  head = seek_head -> data; seek = head -> head; while ( seek )  s = seek -> data; if ( ne_get_binary ( s -> id , & binary_id ) == 0 && ne_buf_read_id ( binary_id . data , binary_id . length ) == id )  static ne_buf_read_id(unsigned char const * p, size_t length) uint64_t id = 0 ; while ( length -- )  id <<= 8; id |= * p ++; return id ; static ne_get_binary(struct ebml_type type, struct ebml_binary * value) if ( ! type . read )  return - 1 ; return 0 ; return s ; seek = seek -> next; seek_head = seek_head -> next; return NULL ; if ( ! found )  if ( ne_get_uint ( found -> position , & seek_pos ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; r = ne_ctx_save ( ctx , & state ); static ne_ctx_save(nestegg * ctx, struct saved_state * s) s -> stream_offset = ne_io_tell ( ctx -> io ); static ne_io_tell(nestegg_io * io) return io -> tell ( io -> userdata ) ; if ( s -> stream_offset < 0 )  return - 1 ; return 0 ; if ( r != 0 )  r = ne_io_seek ( ctx -> io , ctx -> segment_offset + seek_pos , NESTEGG_SEEK_SET ); static ne_io_seek(nestegg_io * io, int64_t offset, int whence) return io -> seek ( offset , whence , io -> userdata ) ; if ( r != 0 )  ctx -> last_valid = 0; r = ne_read_element ( ctx , & id , NULL ); static ne_read_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; r = ne_peek_element ( ctx , id , size ); static ne_peek_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; if ( ctx -> last_valid )  return 1 ; r = ne_read_id ( ctx -> io , & ctx -> last_id , NULL ); static ne_read_id(nestegg_io * io, uint64_t * value, uint64_t * length) return ne_bare_read_vint ( io , value , length , MASK_NONE ) ; static ne_bare_read_vint(nestegg_io * io, uint64_t * value, uint64_t * length, enum vint_mask maskflag) int r ; unsigned char b ; size_t maxlen = 8 ; unsigned int count = 1 , mask = 1 << 7 ; r = ne_io_read ( io , & b , 1 ); static ne_io_read(nestegg_io * io, void * buffer, size_t length) return io -> read ( buffer , length , io -> userdata ) ; if ( r != 1 )  return r ; while ( count < maxlen )  if ( ( b & mask ) != 0 )  mask >>= 1; count += 1; while ( -- count )  r = ne_io_read ( io , & b , 1 ); static ne_io_read(nestegg_io * io, void * buffer, size_t length) return io -> read ( buffer , length , io -> userdata ) ; if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  return r ; r = ne_read_vint ( ctx -> io , & ctx -> last_size , NULL ); static ne_read_vint(nestegg_io * io, uint64_t * value, uint64_t * length) return ne_bare_read_vint ( io , value , length , MASK_FIRST_BIT ) ; static ne_bare_read_vint(nestegg_io * io, uint64_t * value, uint64_t * length, enum vint_mask maskflag) int r ; unsigned char b ; size_t maxlen = 8 ; unsigned int count = 1 , mask = 1 << 7 ; r = ne_io_read ( io , & b , 1 ); if ( r != 1 )  return r ; while ( count < maxlen )  if ( ( b & mask ) != 0 )  mask >>= 1; count += 1; while ( -- count )  r = ne_io_read ( io , & b , 1 ); if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  if ( id != ID_CUES )  ctx -> ancestor = NULL; if ( ne_ctx_push ( ctx , ne_top_level_elements , ctx ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); static void ne_alloc(size_t size) return calloc ( 1 , size ) ; if ( ! item )  return - 1 ; return 0 ; if ( ne_ctx_push ( ctx , ne_segment_elements , & ctx -> segment ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); if ( ! item )  return - 1 ; return 0 ; if ( ne_ctx_push ( ctx , ne_cues_elements , & ctx -> segment . cues ) < 0 )  static ne_ctx_push(nestegg * ctx, struct ebml_element_desc * ancestor, void * data) struct list_node * item ; item = ne_alloc ( sizeof ( * item ) ); if ( ! item )  return - 1 ; return 0 ; while ( ctx -> ancestor )  ne_ctx_pop ( ctx ); static ne_ctx_pop(nestegg * ctx) struct list_node * item ; item = ctx -> ancestor; free ( item ); 