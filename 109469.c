static int CVE_2012_6617_PATCHED_prepare_sdp_description(FFStream *stream, uint8_t struct in_addr my_ip) AVFormatContext * avc ; AVOutputFormat * rtp_format = av_guess_format ( "rtp" , NULL , NULL ) ; avc = avformat_alloc_context ( ); if ( avc == NULL || ! rtp_format )  avc -> oformat = rtp_format; avc -> nb_streams = stream -> nb_streams; if ( stream -> is_multicast )  snprintf ( avc -> filename , 1024 , "rtp://0.0.0.0" ); if ( avc -> nb_streams >= INT_MAX / sizeof ( * avc -> streams ) || ! ( avc -> streams = av_malloc ( avc -> nb_streams * sizeof ( * avc -> streams ) ) ) )  if ( avc -> nb_streams >= INT_MAX / sizeof ( * avs ) || ! ( avs = av_malloc ( avc -> nb_streams * sizeof ( * avs ) ) ) )  avc -> streams [ i ] = & avs [ i ]; avc -> streams [ i ] -> codec = stream -> streams [ i ] -> codec; av_sdp_create ( & avc , 1 , * pbuffer , 2048 ); av_free ( avc -> streams ); av_dict_free ( & avc -> metadata ); av_free ( avc ); av_free ( avs ); 