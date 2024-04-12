static int transcode() int ret ; ret = transcode_init ( ); static int transcode_init() int ret = 0 ; int i ; int j ; AVFormatContext * oc ; AVCodecContext * codec ; OutputStream * ost ; InputStream * ist ; char error [ 1024 ] ; for (i = 0; i < nb_input_files; i++) InputFile * ifile = input_files [ i ] ; if ( ifile -> rate_emu )  for (j = 0; j < ifile -> nb_streams; j++) input_streams [ j + ifile -> ist_index ] -> start = av_gettime ( ); for (i = 0; i < nb_output_files; i++) oc = output_files [ i ] -> ctx; if ( ! oc -> nb_streams && ! ( oc -> oformat -> flags & 0x1000 ) )  return - 22 ; for (i = 0; i < nb_filtergraphs; i++) if ( ( ret = avfilter_graph_config ( filtergraphs [ i ] -> graph , ( ( void * ) 0 ) ) ) < 0 )  return ret ; for (i = 0; i < nb_output_streams; i++) AVCodecContext * icodec = ( ( void * ) 0 ) ; ost = output_streams [ i ]; oc = output_files [ ost -> file_index ] -> ctx; ist = get_input_stream ( ost ); static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; return ( ( void * ) 0 ) ; if ( ost -> attachment_filename )  codec = ost -> st -> codec; if ( ist )  icodec = ist -> st -> codec; ost -> st -> disposition = ist -> st -> disposition; codec -> bits_per_raw_sample = icodec -> bits_per_raw_sample; codec -> chroma_sample_location = icodec -> chroma_sample_location; if ( ost -> stream_copy )  uint64_t extra_size ; extra_size = ( ( uint64_t ) ( icodec -> extradata_size ) ) + 16; if ( extra_size > 2147483647 )  return - 22 ; codec -> codec_id = icodec -> codec_id; codec -> codec_type = icodec -> codec_type; if ( ! codec -> codec_tag )  unsigned int codec_tag ; if ( ! oc -> oformat -> codec_tag || ( av_codec_get_id ( oc -> oformat -> codec_tag , icodec -> codec_tag ) ) == ( codec -> codec_id ) || ! av_codec_get_tag2 ( oc -> oformat -> codec_tag , icodec -> codec_id , & codec_tag ) )  codec -> codec_tag = icodec -> codec_tag; codec -> bit_rate = icodec -> bit_rate; codec -> rc_max_rate = icodec -> rc_max_rate; codec -> rc_buffer_size = icodec -> rc_buffer_size; codec -> field_order = icodec -> field_order; codec -> extradata = ( av_mallocz ( extra_size ) ); if ( ! codec -> extradata )  return - 12 ; memcpy ( ( codec -> extradata ) , ( icodec -> extradata ) , ( icodec -> extradata_size ) ); codec -> extradata_size = icodec -> extradata_size; codec -> bits_per_coded_sample = icodec -> bits_per_coded_sample; codec -> time_base = ist -> st -> time_base; if ( ! strcmp ( oc -> oformat -> name , "avi" ) )  if ( copy_tb < 0 && av_q2d ( ist -> st -> r_frame_rate ) >= av_q2d ( ist -> st -> avg_frame_rate ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( ist -> st -> time_base ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( icodec -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 && av_q2d ( icodec -> time_base ) < 1.0 / 500 || copy_tb == 2 )  codec -> time_base . num = ist -> st -> r_frame_rate . den; codec -> time_base . den = 2 * ist -> st -> r_frame_rate . num; codec -> ticks_per_frame = 2; if ( copy_tb < 0 && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > 2 * av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; codec -> time_base . den *= 2; codec -> ticks_per_frame = 2; if ( ! ( oc -> oformat -> flags & 0002000 ) && strcmp ( oc -> oformat -> name , "mov" ) && strcmp ( oc -> oformat -> name , "mp4" ) && strcmp ( oc -> oformat -> name , "3gp" ) && strcmp ( oc -> oformat -> name , "3g2" ) && strcmp ( oc -> oformat -> name , "psp" ) && strcmp ( oc -> oformat -> name , "ipod" ) && strcmp ( oc -> oformat -> name , "f4v" ) )  if ( copy_tb < 0 && icodec -> time_base . den && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; codec -> time_base = icodec -> time_base; if ( ost -> frame_rate . num )  codec -> time_base = av_inv_q ( ost -> frame_rate ); switch ( codec -> codec_type )  codec -> channel_layout = icodec -> channel_layout; codec -> sample_rate = icodec -> sample_rate; codec -> channels = icodec -> channels; codec -> frame_size = icodec -> frame_size; codec -> audio_service_type = icodec -> audio_service_type; codec -> block_align = icodec -> block_align; if ( ( codec -> block_align == 1 || codec -> block_align == 1152 || codec -> block_align == 576 ) && ( codec -> codec_id ) == AV_CODEC_ID_MP3 )  codec -> block_align = 0; if ( ( codec -> codec_id ) == AV_CODEC_ID_AC3 )  codec -> block_align = 0; codec -> pix_fmt = icodec -> pix_fmt; codec -> width = icodec -> width; codec -> height = icodec -> height; codec -> has_b_frames = icodec -> has_b_frames; ost -> st -> avg_frame_rate = ist -> st -> avg_frame_rate; codec -> width = icodec -> width; codec -> height = icodec -> height; if ( ! ost -> enc )  ost -> enc = avcodec_find_encoder ( codec -> codec_id ); if ( ! ost -> enc )  ret = - 22; if ( ist )  ist -> decoding_needed ++; ost -> encoding_needed = 1; if ( ( codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  if ( ost -> filter && ! ost -> frame_rate . num )  ost -> frame_rate = av_buffersink_get_frame_rate ( ost -> filter -> filter ); if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ist -> framerate; if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ( ist -> st -> r_frame_rate . num ? ist -> st -> r_frame_rate : ( ( AVRational ) ( 25 ) , ( 1 ) ) ) if ( ost -> enc && ost -> enc -> supported_framerates && ! ost -> force_fps )  int idx = av_find_nearest_q_idx ( ost -> frame_rate , ost -> enc -> supported_framerates ) ; ost -> frame_rate = ost -> enc -> supported_framerates [ idx ]; switch ( codec -> codec_type )  codec -> sample_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); codec -> sample_rate = ost -> filter -> filter -> inputs [ 0 ] -> sample_rate; codec -> channel_layout = ost -> filter -> filter -> inputs [ 0 ] -> channel_layout; codec -> channels = avfilter_link_get_channels ( ost -> filter -> filter -> inputs [ 0 ] ); codec -> time_base = ( ( AVRational ) ( 1 ) , codec -> sample_rate ) codec -> time_base = av_inv_q ( ost -> frame_rate ); if ( ost -> filter && ! ( codec -> time_base . num && codec -> time_base . den ) )  codec -> time_base = ost -> filter -> filter -> inputs [ 0 ] -> time_base; codec -> width = ost -> filter -> filter -> inputs [ 0 ] -> w; codec -> height = ost -> filter -> filter -> inputs [ 0 ] -> h; codec -> sample_aspect_ratio = ost -> st -> sample_aspect_ratio = ( ost -> frame_aspect_ratio ? av_d2q ( ( ost -> frame_aspect_ratio * ( codec -> height ) / ( codec -> width ) ) , 255 ) : ost -> filter -> filter -> inputs [ 0 ] -> sample_aspect_ratio ); codec -> pix_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); if ( ! icodec || codec -> width != icodec -> width || codec -> height != icodec -> height || ( codec -> pix_fmt ) != ( icodec -> pix_fmt ) )  codec -> bits_per_raw_sample = frame_bits_per_raw_sample; if ( ost -> forced_keyframes )  if ( ! strncmp ( ( ost -> forced_keyframes ) , "expr:" , 5 ) )  ret = av_expr_parse ( & ost -> forced_keyframes_pexpr , ( ost -> forced_keyframes + 5 ) , forced_keyframes_const_names , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , 0 , ( ( void * ) 0 ) ); if ( ret < 0 )  return ret ; ost -> forced_keyframes_expr_const_values [ FKF_N ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_N_FORCED ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_N ] = ( __builtin_nanf ( "" ) ); ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_T ] = ( __builtin_nanf ( "" ) ); codec -> time_base = ( ( AVRational ) ( 1 ) , ( 1000 ) ) if ( ! codec -> width )  codec -> width = input_streams [ ost -> source_index ] -> st -> codec -> width; codec -> height = input_streams [ ost -> source_index ] -> st -> codec -> height; if ( codec -> flags & ( 0x0200 | 0002000 ) )  char logfilename [ 1024 ] ; FILE * f ; snprintf ( logfilename , sizeof ( logfilename ) , "%s-%d.log" , ( ost -> logfile_prefix ? ost -> logfile_prefix : "ffmpeg2pass" ) , i ); if ( ! strcmp ( ost -> enc -> name , "libx264" ) )  if ( codec -> flags & 0002000 )  char * logbuffer ; codec -> stats_in = logbuffer; if ( codec -> flags & 0x0200 )  f = fopen ( logfilename , "wb" ); ost -> logfile = f; for (i = 0; i < nb_output_streams; i++) ost = output_streams [ i ]; if ( ost -> encoding_needed )  AVCodec * codec = ost -> enc ; AVCodecContext * dec = ( ( void * ) 0 ) ; if ( ist = get_input_stream ( ost ) )  static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; return ( ( void * ) 0 ) ; dec = ist -> st -> codec; if ( dec && dec -> subtitle_header )  ost -> st -> codec -> subtitle_header = ( av_mallocz ( ( dec -> subtitle_header_size + 1 ) ) ); if ( ! ost -> st -> codec -> subtitle_header )  ret = - 12; memcpy ( ( ost -> st -> codec -> subtitle_header ) , ( dec -> subtitle_header ) , ( dec -> subtitle_header_size ) ); ost -> st -> codec -> subtitle_header_size = dec -> subtitle_header_size; if ( ( ret = avcodec_open2 ( ost -> st -> codec , codec , & ost -> opts ) ) < 0 )  for (i = 0; i < nb_input_streams; i++) if ( ( ret = init_input_stream ( i , error , ( sizeof ( error ) ) ) ) < 0 )  static int init_input_stream(int ist_index,char *error,int error_len) int ret ; InputStream * ist = input_streams [ ist_index ] ; if ( ist -> decoding_needed )  AVCodec * codec = ist -> dec ; if ( ! codec )  return - 22 ; ist -> dr1 = codec -> capabilities & 0000002 && ! ( '6' < 56 && do_deinterlace ); if ( ( codec -> type ) == AVMEDIA_TYPE_VIDEO && ist -> dr1 )  ist -> st -> codec -> get_buffer = codec_get_buffer; ist -> st -> codec -> release_buffer = codec_release_buffer; ist -> st -> codec -> opaque = ( & ist -> buffer_pool ); if ( ( ret = avcodec_open2 ( ist -> st -> codec , codec , & ist -> opts ) ) < 0 )  return ret ; return 0 ; for (i = 0; i < nb_input_files; i++) for (i = 0; i < nb_output_files; i++) oc = output_files [ i ] -> ctx; oc -> interrupt_callback = int_cb; if ( ( ret = avformat_write_header ( oc , & output_files [ i ] -> opts ) ) < 0 )  ret = - 22; if ( ret )  return ret ; return 0 ; if ( ret < 0 )  if ( ( ret = init_input_threads ( ) ) < 0 )  static int init_input_threads() int i ; int ret ; if ( nb_input_files == 1 )  return 0 ; for (i = 0; i < nb_input_files; i++) InputFile * f = input_files [ i ] ; if ( ! ( f -> fifo = av_fifo_alloc ( ( 8 * sizeof ( AVPacket ) ) ) ) )  return - 12 ; if ( ret = pthread_create ( & f -> thread , ( ( void * ) 0 ) , input_thread , f ) )  return - ret ; return 0 ; while ( ! received_sigterm )  int64_t cur_time = av_gettime ( ) ; if ( stdin_interaction )  if ( check_keyboard_interaction ( cur_time ) < 0 )  if ( ! need_output ( ) )  static int need_output() int i ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; OutputFile * of = output_files [ ost -> file_index ] ; AVFormatContext * os = output_files [ ost -> file_index ] -> ctx ; if ( ost -> finished || os -> pb && ( avio_tell ( os -> pb ) ) >= of -> limit_filesize )  if ( ( ost -> frame_number ) >= ost -> max_frames )  return 1 ; return 0 ; ret = transcode_step ( ); static int transcode_step() OutputStream * ost ; InputStream * ist ; int ret ; ost = choose_output ( ); static OutputStream *choose_output() int i ; int64_t opts_min = 9223372036854775807L ; OutputStream * ost_min = ( ( void * ) 0 ) ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; int64_t opts = av_rescale_q ( ost -> st -> cur_dts , ost -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( ! ost -> unavailable && ! ost -> finished && opts < opts_min )  opts_min = opts; ost_min = ost; return ost_min ; if ( ! ost )  if ( got_eagain ( ) )  static int got_eagain() int i ; for (i = 0; i < nb_output_streams; i++) if ( output_streams [ i ] -> unavailable )  return 1 ; return 0 ; return 0 ; return - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) ; if ( ost -> filter )  if ( ( ret = transcode_from_filter ( ost -> filter -> graph , & ist ) ) < 0 )  static int transcode_from_filter(FilterGraph *graph,InputStream **best_ist) int ret ; ret = avfilter_graph_request_oldest ( graph -> graph ); if ( ret >= 0 )  return reap_filters ( ) ; static int reap_filters() int i ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; if ( ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) )  ret = reap_filters ( ); static int reap_filters() int i ; OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; return ret ; if ( ret != - 11 )  return ret ; return 0 ; return ret ; if ( ! ist )  return 0 ; ist = input_streams [ ost -> source_index ]; ret = process_input ( ist -> file_index ); static int process_input(int file_index) InputFile * ifile = input_files [ file_index ] ; int ret ; ret = get_input_packet ( ifile , & pkt ); static int get_input_packet(InputFile *f,AVPacket *pkt) if ( nb_input_files > 1 )  return get_input_packet_mt ( f , pkt ) ; static int get_input_packet_mt(InputFile *f,AVPacket *pkt) int ret = 0 ; if ( av_fifo_size ( f -> fifo ) )  if ( f -> finished )  ret = - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ); ret = - 11; return ret ; return av_read_frame ( f -> ctx , pkt ) ; if ( ret == - 11 )  return ret ; if ( ret < 0 )  return - 11 ; return 0 ; if ( ret == - 11 )  return 0 ; if ( ret < 0 )  return ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) ? 0 : ret ; return reap_filters ( ) ; static int reap_filters() int i ; OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; if ( ret < 0 )  if ( ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) || ret == - 11 )  static int check_keyboard_interaction(int64_t cur_time) int i ; int ret ; int key ; static int64_t last_time ; if ( received_nb_signals )  if ( cur_time - last_time >= 100000 && ! run_as_daemon )  key = read_key ( ); static int read_key() unsigned char ch ; struct timeval tv ; fd_set rfds ; ( & rfds ) -> fds_bits [ 0 / ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ] |= ( ( __fd_mask ) 1 ) << 0 % ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ); tv . tv_sec = 0; tv . tv_usec = 0; n = select ( 1 , & rfds , ( ( void * ) 0 ) , ( ( void * ) 0 ) , & tv ); if ( n > 0 )  n = ( read ( 0 , ( & ch ) , 1 ) ); if ( n == 1 )  return ch ; return n ; return - 1 ; key = - 1; if ( key == 'q' )  if ( key == 'c' || key == 'C' )  char buf [ 4096 ] ; char target [ 64 ] ; char command [ 256 ] ; char arg [ 256 ] = { ( 0 ) } ; double time ; int k ; fprintf ( stderr , "\nEnter command: <target> <time> <command>[ <argument>]\n" ); i = 0; while ( ( k = read_key ( ) ) != 10 && k != '\r' && i < sizeof ( buf ) - 1 )  static int read_key() unsigned char ch ; struct timeval tv ; fd_set rfds ; ( & rfds ) -> fds_bits [ 0 / ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ] |= ( ( __fd_mask ) 1 ) << 0 % ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ); tv . tv_sec = 0; tv . tv_usec = 0; n = select ( 1 , & rfds , ( ( void * ) 0 ) , ( ( void * ) 0 ) , & tv ); if ( n > 0 )  n = ( read ( 0 , ( & ch ) , 1 ) ); if ( n == 1 )  return ch ; return n ; return - 1 ; if ( k > 0 )  buf [ i ++ ] = k; buf [ i ] = 0; if ( k > 0 && ( n = sscanf ( buf , "%63[^ ] %lf %255[^ ] %255[^\n]" , target , & time , command , arg ) ) >= 3 )  for (i = 0; i < nb_filtergraphs; i++) FilterGraph * fg = filtergraphs [ i ] ; if ( fg -> graph )  if ( time < 0 )  ret = avfilter_graph_send_command ( fg -> graph , target , command , arg , buf , ( sizeof ( buf ) ) , ( key == 'c' ? 1 : 0 ) ); fprintf ( stderr , "Command reply for stream %d: ret:%d res:%s\n" , i , ret , buf ); fprintf ( stderr , "error parsing debug value\n" ); fprintf ( stderr , "debug=%d\n" , debug ); fprintf ( stderr , "key    function\n?      show this help\n+      increase verbosity\n-      decrease verbosity\nc      Send command to filtergraph\nD      cycle through available debug modes\nh      dump packets/hex press to cycle through the 3 states\nq      quit\ns      Show QP histogram\n" ); 