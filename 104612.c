static int encode_png(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + 12 * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  s -> bytestream_start = s -> bytestream = pkt -> data; s -> bytestream_end = pkt -> data + pkt -> size; s -> bytestream += 8; ret = encode_headers ( avctx , pict ); if ( ret < 0 )  ret = encode_frame ( avctx , pict ); if ( ret < 0 )  png_write_chunk ( & s -> bytestream , MKTAG ( 'I' , 'E' , 'N' , 'D' ) , NULL , 0 ); static void png_write_chunk(uint8_t **f, uint32_t const uint8_t *buf, int length) if ( length > 0 )  memcpy ( * f , buf , length ); * f += length; bytestream_put_be32 ( f , ~crc ); 