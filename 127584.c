static int transcode_init() int i ; int j ; AVFormatContext * oc ; AVCodecContext * codec ; OutputStream * ost ; InputStream * ist ; for (i = 0; i < nb_input_files; i++) InputFile * ifile = input_files [ i ] ; if ( ifile -> rate_emu )  for (j = 0; j < ifile -> nb_streams; j++) input_streams [ j + ifile -> ist_index ] -> start = av_gettime ( ); for (i = 0; i < nb_output_files; i++) oc = output_files [ i ] -> ctx; if ( ! oc -> nb_streams && ! ( oc -> oformat -> flags & 0x1000 ) )  for (i = 0; i < nb_filtergraphs; i++) if ( ( ret = avfilter_graph_config ( filtergraphs [ i ] -> graph , ( ( void * ) 0 ) ) ) < 0 )  for (i = 0; i < nb_output_streams; i++) AVCodecContext * icodec = ( ( void * ) 0 ) ; ost = output_streams [ i ]; oc = output_files [ ost -> file_index ] -> ctx; ist = get_input_stream ( ost ); static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; return ( ( void * ) 0 ) ; if ( ost -> attachment_filename )  codec = ost -> st -> codec; if ( ist )  icodec = ist -> st -> codec; ost -> st -> disposition = ist -> st -> disposition; codec -> bits_per_raw_sample = icodec -> bits_per_raw_sample; codec -> chroma_sample_location = icodec -> chroma_sample_location; if ( ost -> stream_copy )  uint64_t extra_size ; if ( ! ( ist && ! ost -> filter ) )  extra_size = ( ( uint64_t ) ( icodec -> extradata_size ) ) + 16; if ( extra_size > 2147483647 )  codec -> codec_id = icodec -> codec_id; codec -> codec_type = icodec -> codec_type; if ( ! codec -> codec_tag )  unsigned int codec_tag ; if ( ! oc -> oformat -> codec_tag || ( av_codec_get_id ( oc -> oformat -> codec_tag , icodec -> codec_tag ) ) == ( codec -> codec_id ) || ! av_codec_get_tag2 ( oc -> oformat -> codec_tag , icodec -> codec_id , & codec_tag ) )  codec -> codec_tag = icodec -> codec_tag; codec -> bit_rate = icodec -> bit_rate; codec -> rc_max_rate = icodec -> rc_max_rate; codec -> rc_buffer_size = icodec -> rc_buffer_size; codec -> field_order = icodec -> field_order; codec -> extradata = ( av_mallocz ( extra_size ) ); if ( ! codec -> extradata )  memcpy ( ( codec -> extradata ) , ( icodec -> extradata ) , ( icodec -> extradata_size ) ); codec -> extradata_size = icodec -> extradata_size; codec -> bits_per_coded_sample = icodec -> bits_per_coded_sample; codec -> time_base = ist -> st -> time_base; if ( ! strcmp ( oc -> oformat -> name , "avi" ) )  if ( copy_tb < 0 && av_q2d ( ist -> st -> r_frame_rate ) >= av_q2d ( ist -> st -> avg_frame_rate ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( ist -> st -> time_base ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( icodec -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 && av_q2d ( icodec -> time_base ) < 1.0 / 500 || copy_tb == 2 )  codec -> time_base . num = ist -> st -> r_frame_rate . den; codec -> time_base . den = 2 * ist -> st -> r_frame_rate . num; codec -> ticks_per_frame = 2; if ( copy_tb < 0 && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > 2 * av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; codec -> time_base . den *= 2; codec -> ticks_per_frame = 2; if ( ! ( oc -> oformat -> flags & 0002000 ) && strcmp ( oc -> oformat -> name , "mov" ) && strcmp ( oc -> oformat -> name , "mp4" ) && strcmp ( oc -> oformat -> name , "3gp" ) && strcmp ( oc -> oformat -> name , "3g2" ) && strcmp ( oc -> oformat -> name , "psp" ) && strcmp ( oc -> oformat -> name , "ipod" ) && strcmp ( oc -> oformat -> name , "f4v" ) )  if ( copy_tb < 0 && icodec -> time_base . den && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; if ( codec -> codec_tag == ( ( const union unaligned_32 * ) "tmcd" ) -> l && icodec -> time_base . num < icodec -> time_base . den && icodec -> time_base . num > 0 && 121L L * icodec -> time_base . num > icodec -> time_base . den ) codec -> time_base = icodec -> time_base; if ( ost -> frame_rate . num )  codec -> time_base = av_inv_q ( ost -> frame_rate ); av_reduce ( & codec -> time_base . num , & codec -> time_base . den , codec -> time_base . num , codec -> time_base . den , 2147483647 ); switch ( codec -> codec_type )  codec -> channel_layout = icodec -> channel_layout; codec -> sample_rate = icodec -> sample_rate; codec -> channels = icodec -> channels; codec -> frame_size = icodec -> frame_size; codec -> audio_service_type = icodec -> audio_service_type; codec -> block_align = icodec -> block_align; if ( ( codec -> block_align == 1 || codec -> block_align == 1152 || codec -> block_align == 576 ) && ( codec -> codec_id ) == AV_CODEC_ID_MP3 )  codec -> block_align = 0; if ( ( codec -> codec_id ) == AV_CODEC_ID_AC3 )  codec -> block_align = 0; codec -> pix_fmt = icodec -> pix_fmt; codec -> width = icodec -> width; codec -> height = icodec -> height; codec -> has_b_frames = icodec -> has_b_frames; if ( ! codec -> sample_aspect_ratio . num )  codec -> sample_aspect_ratio = ost -> st -> sample_aspect_ratio = ( ist -> st -> sample_aspect_ratio . num ? ist -> st -> sample_aspect_ratio : ( ( ist -> st -> codec -> sample_aspect_ratio . num ? ist -> st -> codec -> sample_aspect_ratio : ( ( AVRational ) ( 0 ) , ( 1 ) ) ) ) ) ost -> st -> avg_frame_rate = ist -> st -> avg_frame_rate; codec -> width = icodec -> width; codec -> height = icodec -> height; if ( ! ost -> enc )  ost -> enc = avcodec_find_encoder ( codec -> codec_id ); if ( ! ost -> enc )  snprintf ( error , sizeof ( error ) , "Encoder (codec %s) not found for output stream #%d:%d" , avcodec_get_name ( ost -> st -> codec -> codec_id ) , ost -> file_index , ost -> index ); if ( ist )  ist -> decoding_needed ++; ost -> encoding_needed = 1; if ( ! ost -> filter && ( ( codec -> codec_type ) == AVMEDIA_TYPE_VIDEO || ( codec -> codec_type ) == AVMEDIA_TYPE_AUDIO ) )  fg = init_simple_filtergraph ( ist , ost ); if ( configure_filtergraph ( fg ) )  if ( ( codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  if ( ost -> filter && ! ost -> frame_rate . num )  ost -> frame_rate = av_buffersink_get_frame_rate ( ost -> filter -> filter ); if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ist -> framerate; if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ( ist -> st -> r_frame_rate . num ? ist -> st -> r_frame_rate : ( ( AVRational ) ( 25 ) , ( 1 ) ) ) if ( ost -> enc && ost -> enc -> supported_framerates && ! ost -> force_fps )  int idx = av_find_nearest_q_idx ( ost -> frame_rate , ost -> enc -> supported_framerates ) ; ost -> frame_rate = ost -> enc -> supported_framerates [ idx ]; switch ( codec -> codec_type )  codec -> sample_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); codec -> sample_rate = ost -> filter -> filter -> inputs [ 0 ] -> sample_rate; codec -> channel_layout = ost -> filter -> filter -> inputs [ 0 ] -> channel_layout; codec -> channels = avfilter_link_get_channels ( ost -> filter -> filter -> inputs [ 0 ] ); codec -> time_base = ( ( AVRational ) ( 1 ) , codec -> sample_rate ) codec -> time_base = av_inv_q ( ost -> frame_rate ); if ( ost -> filter && ! ( codec -> time_base . num && codec -> time_base . den ) )  codec -> time_base = ost -> filter -> filter -> inputs [ 0 ] -> time_base; if ( av_q2d ( codec -> time_base ) < 0.001 && video_sync_method != 0 && ( video_sync_method == 1 || video_sync_method == - 1 && ! ( oc -> oformat -> flags & 0002000 ) ) )  av_log ( oc , 24 , "Frame rate very high for a muxer not efficiently supporting it.\nPlease consider specifying a lower framerate, a different muxer or -vsync 2\n" ); for (j = 0; j < ost -> forced_kf_count; j++) ost -> forced_kf_pts [ j ] = av_rescale_q ( ost -> forced_kf_pts [ j ] , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , codec -> time_base ) codec -> width = ost -> filter -> filter -> inputs [ 0 ] -> w; codec -> height = ost -> filter -> filter -> inputs [ 0 ] -> h; codec -> sample_aspect_ratio = ost -> st -> sample_aspect_ratio = ( ost -> frame_aspect_ratio ? av_d2q ( ( ost -> frame_aspect_ratio * ( codec -> height ) / ( codec -> width ) ) , 255 ) : ost -> filter -> filter -> inputs [ 0 ] -> sample_aspect_ratio ); codec -> pix_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); if ( ! icodec || codec -> width != icodec -> width || codec -> height != icodec -> height || ( codec -> pix_fmt ) != ( icodec -> pix_fmt ) )  codec -> bits_per_raw_sample = frame_bits_per_raw_sample; if ( ost -> forced_keyframes )  if ( ! strncmp ( ( ost -> forced_keyframes ) , "expr:" , 5 ) )  ret = av_expr_parse ( & ost -> forced_keyframes_pexpr , ( ost -> forced_keyframes + 5 ) , forced_keyframes_const_names , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , 0 , ( ( void * ) 0 ) ); if ( ret < 0 )  av_log ( ( ( void * ) 0 ) , 16 , "Invalid force_key_frames expression '%s'\n" , ost -> forced_keyframes + 5 ); return ret ; ost -> forced_keyframes_expr_const_values [ FKF_N ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_N_FORCED ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_N ] = ( __builtin_nanf ( "" ) ); ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_T ] = ( __builtin_nanf ( "" ) ); parse_forced_key_frames ( ost -> forced_keyframes , ost , ost -> st -> codec ); codec -> time_base = ( ( AVRational ) ( 1 ) , ( 1000 ) ) if ( ! codec -> width )  codec -> width = input_streams [ ost -> source_index ] -> st -> codec -> width; codec -> height = input_streams [ ost -> source_index ] -> st -> codec -> height; if ( codec -> flags & ( 0x0200 | 0002000 ) )  char logfilename [ 1024 ] ; FILE * f ; snprintf ( logfilename , sizeof ( logfilename ) , "%s-%d.log" , ( ost -> logfile_prefix ? ost -> logfile_prefix : "ffmpeg2pass" ) , i ); if ( ! strcmp ( ost -> enc -> name , "libx264" ) )  av_dict_set ( & ost -> opts , "stats" , logfilename , 16 ); if ( codec -> flags & 0002000 )  char * logbuffer ; if ( cmdutils_read_file ( logfilename , & logbuffer , & logbuffer_size ) < 0 )  av_log ( ( ( void * ) 0 ) , 8 , "Error reading log file '%s' for pass-2 encoding\n" , logfilename ); codec -> stats_in = logbuffer; if ( codec -> flags & 0x0200 )  f = fopen ( logfilename , "wb" ); if ( ! f )  av_log ( ( ( void * ) 0 ) , 8 , "Cannot write log file '%s' for pass-1 encoding: %s\n" , logfilename , strerror ( * __errno_location ( ) ) ); ost -> logfile = f; if ( ost -> encoding_needed )  AVCodec * codec = ost -> enc ; if ( ist = get_input_stream ( ost ) )  static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; dec = ist -> st -> codec; if ( dec && dec -> subtitle_header )  ost -> st -> codec -> subtitle_header = ( av_mallocz ( ( dec -> subtitle_header_size + 1 ) ) ); if ( ! ost -> st -> codec -> subtitle_header )  memcpy ( ( ost -> st -> codec -> subtitle_header ) , ( dec -> subtitle_header ) , ( dec -> subtitle_header_size ) ); ost -> st -> codec -> subtitle_header_size = dec -> subtitle_header_size; if ( ! av_dict_get ( ost -> opts , "threads" , ( ( void * ) 0 ) , 0 ) )  av_dict_set ( & ost -> opts , "threads" , "auto" , 0 ); if ( ( ret = avcodec_open2 ( ost -> st -> codec , codec , & ost -> opts ) ) < 0 )  if ( ret == - 0x2bb2afa8 )  abort_codec_experimental ( codec , 1 ); static void abort_codec_experimental(AVCodec *c,int encoder) snprintf ( error , sizeof ( error ) , "Error while opening encoder for output stream #%d:%d - maybe incorrect parameters such as bit_rate, rate, width or height" , ost -> file_index , ost -> index ); if ( ( ost -> enc -> type ) == AVMEDIA_TYPE_AUDIO && ! ( ost -> enc -> capabilities & 0x10000 ) )  av_buffersink_set_frame_size ( ost -> filter -> filter , ( ost -> st -> codec -> frame_size ) ); assert_avoptions ( ost -> opts ); void assert_avoptions(AVDictionary *m) if ( t = av_dict_get ( m , "" , ( ( void * ) 0 ) , 2 ) )  av_log ( ( ( void * ) 0 ) , 8 , "Option %s not found.\n" , t -> key ); if ( ost -> st -> codec -> bit_rate && ost -> st -> codec -> bit_rate < 1000 )  extra_size += ( ost -> st -> codec -> extradata_size ); if ( ost -> st -> codec -> me_threshold )  input_streams [ ost -> source_index ] -> st -> codec -> debug |= 32; av_opt_set_dict ( ( ost -> st -> codec ) , & ost -> opts ); avcodec_close ( ost -> st -> codec ); if ( av_strerror ( ret , errbuf , sizeof ( errbuf ) ) < 0 )  errbuf_ptr = ( strerror ( - ret ) ); snprintf ( error , sizeof ( error ) , "Could not write header for output file #%d (incorrect codec parameters ?): %s" , i , errbuf_ptr ); if ( ost -> attachment_filename )  av_log ( ( ( void * ) 0 ) , 32 , "  File %s -> Stream #%d:%d\n" , ost -> attachment_filename , ost -> file_index , ost -> index ); if ( ost -> filter && ost -> filter -> graph -> graph_desc )  av_log ( ( ( void * ) 0 ) , 32 , "  %s" , ost -> filter -> name ); av_log ( ( ( void * ) 0 ) , 32 , " (graph %d)" , ost -> filter -> graph -> index ); av_log ( ( ( void * ) 0 ) , 32 , " -> Stream #%d:%d (%s)\n" , ost -> file_index , ost -> index , ( ost -> enc ? ost -> enc -> name : "?" ) ); av_log ( ( ( void * ) 0 ) , 32 , "  Stream #%d:%d -> #%d:%d" , input_streams [ ost -> source_index ] -> file_index , input_streams [ ost -> source_index ] -> st -> index , ost -> file_index , ost -> index ); if ( ost -> sync_ist != input_streams [ ost -> source_index ] )  av_log ( ( ( void * ) 0 ) , 32 , " [sync #%d:%d]" , ost -> sync_ist -> file_index , ost -> sync_ist -> st -> index ); if ( ost -> stream_copy )  av_log ( ( ( void * ) 0 ) , 32 , " (%s -> %s)" , ( input_streams [ ost -> source_index ] -> dec ? input_streams [ ost -> source_index ] -> dec -> name : "?" ) , ( ost -> enc ? ost -> enc -> name : "?" ) ); if ( ret )  av_log ( ( ( void * ) 0 ) , 16 , "%s\n" , error ); return ret ; 