static int encode_apng(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; APNGFctlChunk fctl_chunk ; if ( pict && avctx -> codec_id == AV_CODEC_ID_APNG && s -> color_type == PNG_COLOR_TYPE_PALETTE )  uint32_t checksum = ~av_crc ( av_crc_get_table ( AV_CRC_32_IEEE_LE ) , ~0U , pict -> data [ 1 ] , 256 * sizeof ( uint32_t ) ) ; if ( avctx -> frame_number == 0 )  s -> palette_checksum = checksum; if ( checksum != s -> palette_checksum )  enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + ( 4 + 12 ) * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  if ( avctx -> frame_number == 0 )  s -> bytestream = avctx -> extradata = av_malloc ( FF_MIN_BUFFER_SIZE ); if ( ! avctx -> extradata )  ret = encode_headers ( avctx , pict ); if ( ret < 0 )  avctx -> extradata_size = s -> bytestream - avctx -> extradata; s -> last_frame_packet = av_malloc ( max_packet_size ); if ( ! s -> last_frame_packet )  if ( s -> last_frame )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  if ( pict )  s -> bytestream_start = s -> bytestream = s -> last_frame_packet; s -> bytestream_end = s -> bytestream + max_packet_size; fctl_chunk . sequence_number = s -> sequence_number; s -> bytestream += 26 + 12; ret = apng_encode_frame ( avctx , pict , & fctl_chunk , & s -> last_frame_fctl ); static int apng_encode_frame(AVCodecContext *avctx, const AVFrame APNGFctlChunk *best_fctl_chunk, APNGFctlChunk *best_last_fctl_chunk) if ( avctx -> frame_number == 0 )  return encode_frame ( avctx , pict ) ; static int encode_frame(AVCodecContext *avctx, const AVFrame *pict) PNGEncContext * s = avctx -> priv_data ; const AVFrame * const p = pict int y , len , ret ; int row_size , pass_row_size ; uint8_t * ptr , * top , * crow_buf , * crow ; uint8_t * progressive_buf = NULL ; row_size = ( pict -> width * s -> bits_per_pixel + 7 ) >> 3; crow_base = av_malloc ( ( row_size + 32 ) << ( s -> filter_type == PNG_FILTER_VALUE_MIXED ) ); if ( ! crow_base )  if ( s -> is_progressive )  progressive_buf = av_malloc ( row_size + 1 ); top_buf = av_malloc ( row_size + 1 ); if ( ! progressive_buf || ! top_buf )  s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( s -> is_progressive )  int pass ; for (pass = 0; pass < NB_PASSES; pass++) pass_row_size = ff_png_pass_row_size ( pass , s -> bits_per_pixel , pict -> width ); if ( pass_row_size > 0 )  for (y = 0; y < pict->height; y++) if ( ( ff_png_pass_ymask [ pass ] << ( y & 7 ) ) & 0x80 )  ptr = p -> data [ 0 ] + y * p -> linesize [ 0 ]; png_get_interlaced_row ( progressive_buf , pass_row_size , s -> bits_per_pixel , pass , ptr , pict -> width ); static void png_get_interlaced_row(uint8_t *dst, int int bits_per_pixel, int const uint8_t *src, int width) int x , mask , dst_x , j , b , bpp ; uint8_t * d ; const uint8_t * s ; static const int masks [ ] = { 0x80 , 0x08 , 0x88 , 0x22 , 0xaa , 0x55 , 0xff } ; mask = masks [ pass ]; switch ( bits_per_pixel )  memset ( dst , 0 , row_size ); dst_x = 0; for (x = 0; x < width; x++) j = ( x & 7 ); if ( ( mask << j ) & 0x80 )  b = ( src [ x >> 3 ] >> ( 7 - j ) ) & 1; dst [ dst_x >> 3 ] |= b << ( 7 - ( dst_x & 7 ) ); dst_x ++; bpp = bits_per_pixel >> 3; d = dst; s = src; for (x = 0; x < width; x++) j = x & 7; if ( ( mask << j ) & 0x80 )  memcpy ( d , s , bpp ); d += bpp; s += bpp; 