static int encode_apng(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; if ( pict && avctx -> codec_id == AV_CODEC_ID_APNG && s -> color_type == PNG_COLOR_TYPE_PALETTE )  uint32_t checksum = ~av_crc ( av_crc_get_table ( AV_CRC_32_IEEE_LE ) , ~0U , pict -> data [ 1 ] , 256 * sizeof ( uint32_t ) ) ; if ( avctx -> frame_number == 0 )  s -> palette_checksum = checksum; if ( checksum != s -> palette_checksum )  enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + ( 4 + 12 ) * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  if ( avctx -> frame_number == 0 )  if ( s -> last_frame )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  memcpy ( pkt -> data , s -> last_frame_packet , s -> last_frame_packet_size ); pkt -> size = s -> last_frame_packet_size; pkt -> pts = pkt -> dts = s -> last_frame -> pts; uint8_t * last_fctl_chunk_start = pkt -> data ; 