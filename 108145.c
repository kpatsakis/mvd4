 nestegg_track_codec_data(nestegg * ctx, unsigned int track, unsigned int unsigned char ** data, size_t * length) struct track_entry * entry ; entry = ne_find_track_entry ( ctx , track ); if ( ! entry )  if ( nestegg_track_codec_id ( ctx , track ) != NESTEGG_CODEC_VORBIS && nestegg_track_codec_id ( ctx , track ) != NESTEGG_CODEC_OPUS )   nestegg_track_codec_id(nestegg * ctx, unsigned int track) char * codec_id ; struct track_entry * entry ; entry = ne_find_track_entry ( ctx , track ); if ( ! entry )  if ( ne_get_string ( entry -> codec_id , & codec_id ) != 0 )  static ne_get_string(struct ebml_type type, char ** value) if ( ! type . read )  assert ( type . type == TYPE_STRING ); 