int avformat_find_stream_info(AVFormatContext *ic,AVDictionary **options) int i ; int ret ; int read_size ; int j ; AVStream * st ; AVPacket * pkt ; for (i = 0; i < ic -> nb_streams; i++) st = ic -> streams [ i ]; if ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO || ( st -> codec -> codec_type ) == AVMEDIA_TYPE_SUBTITLE )  if ( ! st -> codec -> time_base . num )  st -> codec -> time_base = st -> time_base; if ( ! st -> parser && ! ( ic -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( st -> parser )  if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; for (i = 0; i < ic -> nb_streams; i++) ic -> streams [ i ] -> info -> last_dts = ( ( int64_t ) 0x8000000000000000UL ); ic -> streams [ i ] -> info -> fps_first_dts = ( ( int64_t ) 0x8000000000000000UL ); ic -> streams [ i ] -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); read_size = 0; if ( ff_check_interrupt ( & ic -> interrupt_callback ) )  for (i = 0; i < ic -> nb_streams; i++) int fps_analyze_framecount = 20 ; st = ic -> streams [ i ]; if ( ! has_codec_parameters ( st , ( ( void * ) 0 ) ) )  static int has_codec_parameters(AVStream *st,const char **errmsg_ptr) return 0 ; while ( 0 )  if ( ( avctx -> codec_id ) == AV_CODEC_ID_NONE )  return 0 ; while ( 0 )  return 1 ; if ( av_q2d ( st -> time_base ) > 0.0005 )  fps_analyze_framecount *= 2; if ( ic -> fps_probe_size >= 0 )  fps_analyze_framecount = ic -> fps_probe_size; if ( st -> disposition & 0x0400 )  fps_analyze_framecount = 0; if ( tb_unreliable ( st -> codec ) && ! ( st -> r_frame_rate . num && st -> avg_frame_rate . num ) && st -> info -> duration_count < fps_analyze_framecount && ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  static int tb_unreliable(AVCodecContext *c) if ( c -> time_base . den >= 101L * c -> time_base . num || c -> time_base . den < 5L * c -> time_base . num || c -> codec_tag == ( ( const union unaligned_32 * ) "mp4v" ) -> l || ( c -> codec_id ) == AV_CODEC_ID_MPEG2VIDEO || ( c -> codec_id ) == AV_CODEC_ID_H264 )  return 1 ; return 0 ; if ( st -> parser && st -> parser -> parser -> split && ! st -> codec -> extradata )  if ( st -> first_dts == ( ( int64_t ) 0x8000000000000000UL ) && ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO || ( st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO ) )  if ( i == ic -> nb_streams )  if ( ! ( ic -> ctx_flags & 0x1 ) )  if ( read_size >= ic -> probesize )  ret = read_frame_internal ( ic , & pkt1 ); if ( ret == - '\v' )  if ( ret < 0 )  if ( ic -> flags & 0x0040 )  pkt = & pkt1; pkt = add_to_pktbuf ( & ic -> packet_buffer , & pkt1 , & ic -> packet_buffer_end ); static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; if ( ( ret = av_dup_packet ( pkt ) ) < 0 )  read_size += pkt -> size; st = ic -> streams [ pkt -> stream_index ]; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> codec_info_nb_frames > 1 )  if ( st -> info -> fps_last_dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> info -> fps_last_dts >= pkt -> dts )  st -> info -> fps_first_dts = st -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( st -> info -> fps_last_dts != ( ( int64_t ) 0x8000000000000000UL ) && st -> info -> fps_last_dts_idx > st -> info -> fps_first_dts_idx && ( pkt -> dts - st -> info -> fps_last_dts ) / 1000 > ( st -> info -> fps_last_dts - st -> info -> fps_first_dts ) / ( st -> info -> fps_last_dts_idx - st -> info -> fps_first_dts_idx ) )  st -> info -> fps_first_dts = st -> info -> fps_last_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( st -> info -> fps_first_dts == ( ( int64_t ) 0x8000000000000000UL ) )  st -> info -> fps_first_dts = pkt -> dts; st -> info -> fps_first_dts_idx = st -> codec_info_nb_frames; st -> info -> fps_last_dts = pkt -> dts; st -> info -> fps_last_dts_idx = st -> codec_info_nb_frames; if ( st -> codec_info_nb_frames > 1 )  int64_t t = 0 ; if ( st -> time_base . den > 0 )  t = av_rescale_q ( st -> info -> codec_info_duration , st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( st -> avg_frame_rate . num > 0 )  t = ( t > av_rescale_q ( ( st -> codec_info_nb_frames ) , av_inv_q ( st -> avg_frame_rate ) , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ? t : av_rescale_q ( ( st -> codec_info_nb_frames ) , av_inv_q ( st -> avg_frame_rate ) , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) if ( t >= ( ic -> max_analyze_duration ) )  if ( pkt -> duration )  st -> info -> codec_info_duration += ( pkt -> duration ); st -> info -> codec_info_duration_fields += ( ( st -> parser && st -> codec -> ticks_per_frame == 2 ? st -> parser -> repeat_pict + 1 : 2 ) ); int64_t last = st -> info -> last_dts ; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && last != ( ( int64_t ) 0x8000000000000000UL ) && pkt -> dts > last && ( pkt -> dts ) - ( ( uint64_t ) last ) < 9223372036854775807L )  double dts = ( ( is_relative ( pkt -> dts ) ? ( pkt -> dts ) - ( 9223372036854775807L - ( 1L L << 48 ) ) : ( pkt -> dts ) ) ) * av_q2d ( st -> time_base ) int64_t duration = pkt -> dts - last ; if ( ! st -> info -> duration_error )  st -> info -> duration_error = ( av_mallocz ( sizeof ( st -> info -> duration_error [ 0 ] ) * 2 ) ); for (i = 0; i < 60 * 12 + 6; i++) int framerate = get_std_framerate ( i ) ; static int get_std_framerate(int i) if ( i < 60 * 12 )  return ( i + 1 ) * 1001 ; double sdts = dts * framerate / ( 1001 * 12 ) ; for (j = 0; j < 2; j++) int64_t ticks = ( llrint ( sdts + j * 0.5 ) ) ; double error = sdts - ticks + j * 0.5 ; st -> info -> duration_error [ j ] [ 0 ] [ i ] += error; st -> info -> duration_error [ j ] [ 1 ] [ i ] += error * error; st -> info -> duration_count ++; if ( st -> info -> duration_count > 3 && is_relative ( pkt -> dts ) == is_relative ( last ) )  st -> info -> duration_gcd = av_gcd ( st -> info -> duration_gcd , duration ); if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  st -> info -> last_dts = pkt -> dts; if ( st -> parser && st -> parser -> parser -> split && ! st -> codec -> extradata )  int i = ( st -> parser -> parser -> split ) ( st -> codec , ( pkt -> data ) , pkt -> size ) ; if ( i > 0 && i < ( 1 << 28 ) - 16 )  st -> codec -> extradata_size = i; st -> codec -> extradata = ( av_malloc ( ( st -> codec -> extradata_size + 16 ) ) ); if ( ! st -> codec -> extradata )  memcpy ( ( st -> codec -> extradata ) , ( pkt -> data ) , ( st -> codec -> extradata_size ) ); memset ( ( st -> codec -> extradata + i ) , 0 , 16 ); st -> codec_info_nb_frames ++; static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); pkt -> pts = wrap_timestamp ( st , pkt -> pts ); if ( ! pktl && st -> request_probe <= 0 )  s -> raw_packet_buffer_remaining_size -= pkt -> size; probe_codec ( s , st , pkt ); static void probe_codec(AVFormatContext *s,AVStream *st,const AVPacket *pkt) if ( st -> request_probe > 0 )  AVProbeData * pd = & st -> probe_data ; if ( pkt )  uint8_t * new_buf = ( av_realloc ( ( pd -> buf ) , ( pd -> buf_size + pkt -> size + 32 ) ) ) ; if ( ! new_buf )  pd -> buf = new_buf; memcpy ( ( pd -> buf + pd -> buf_size ) , ( pkt -> data ) , ( pkt -> size ) ); pd -> buf_size += pkt -> size; memset ( ( pd -> buf + pd -> buf_size ) , 0 , 32 ); if ( end || ff_log2_c ( ( pd -> buf_size ) ) != ff_log2_c ( ( pd -> buf_size - pkt -> size ) ) )  int score = set_codec_from_probe_data ( s , st , pd ) ; if ( ( st -> codec -> codec_id ) != AV_CODEC_ID_NONE && score > 100 / 4 || end )  pd -> buf_size = 0; av_freep ( ( & pd -> buf ) ); 