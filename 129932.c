 nestegg_track_seek(nestegg * ctx, unsigned int track, uint64_t tstamp) int r ; struct cue_point * cue_point ; struct cue_track_positions * pos ; uint64_t seek_pos , tc_scale ; if ( ! ctx -> segment . cues . cue_point . head )  r = ne_init_cue_points ( ctx , - 1 ); if ( r != 0 )  tc_scale = ne_get_timecode_scale ( ctx ); static ne_get_timecode_scale(nestegg * ctx) uint64_t scale ; if ( ne_get_uint ( ctx -> segment . info . timecode_scale , & scale ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; scale = 1000000; return scale ; cue_point = ne_find_cue_point_for_tstamp ( ctx , ctx -> segment . cues . cue_point . head , track , tc_scale , tstamp ); static struct cue_point ne_find_cue_point_for_tstamp(nestegg * ctx, struct ebml_list_node * cue_point, unsigned int track, uint64_t scale, uint64_t tstamp) uint64_t time ; struct cue_point * c , * prev = NULL ; while ( cue_point )  c = cue_point -> data; if ( ! prev )  prev = c; if ( ne_get_uint ( c -> time , & time ) == 0 && time * scale > tstamp )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; if ( ne_find_cue_position_for_track ( ctx , c -> cue_track_positions . head , track ) != NULL )  static struct cue_track_positions ne_find_cue_position_for_track(nestegg * ctx, struct ebml_list_node * node, unsigned int track) uint64_t track_number ; unsigned int t ; while ( node )  pos = node -> data; if ( ne_get_uint ( pos -> track , & track_number ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; return NULL ; if ( ne_map_track_number_to_index ( ctx , track_number , & t ) != 0 )  static ne_map_track_number_to_index(nestegg * unsigned int unsigned int * track_index) struct ebml_list_node * node ; struct track_entry * t_entry ; uint64_t t_number = 0 ; if ( ! track_index )  return - 1 ; if ( track_number == 0 )  return - 1 ; node = ctx -> segment . tracks . track_entry . head; while ( node )  t_entry = node -> data; if ( ne_get_uint ( t_entry -> number , & t_number ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; return - 1 ; if ( t_number == track_number )  return 0 ; node = node -> next; return - 1 ; return NULL ; if ( t == track )  return pos ; node = node -> next; return NULL ; prev = c; cue_point = cue_point -> next; return prev ; if ( ! cue_point )  pos = ne_find_cue_position_for_track ( ctx , cue_point -> cue_track_positions . head , track ); static struct cue_track_positions ne_find_cue_position_for_track(nestegg * ctx, struct ebml_list_node * node, unsigned int track) uint64_t track_number ; unsigned int t ; while ( node )  pos = node -> data; if ( ne_get_uint ( pos -> track , & track_number ) != 0 )  return NULL ; if ( ne_map_track_number_to_index ( ctx , track_number , & t ) != 0 )  return NULL ; if ( t == track )  return pos ; node = node -> next; return NULL ; if ( pos == NULL )  if ( ne_get_uint ( pos -> cluster_position , & seek_pos ) != 0 )  static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  return - 1 ; return 0 ; r = nestegg_offset_seek ( ctx , ctx -> segment_offset + seek_pos );  nestegg_offset_seek(nestegg * ctx, uint64_t offset) int r ; if ( offset > INT64_MAX )  r = ne_io_seek ( ctx -> io , offset , NESTEGG_SEEK_SET ); static ne_io_seek(nestegg_io * io, int64_t offset, int whence) return io -> seek ( offset , whence , io -> userdata ) ; if ( r != 0 )  ctx -> last_valid = 0; while ( ctx -> ancestor )  ne_ctx_pop ( ctx ); static ne_ctx_pop(nestegg * ctx) struct list_node * item ; item = ctx -> ancestor; free ( item ); 