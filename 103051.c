int CVE_2014_8541_PATCHED_ff_mjpeg_decode_sof(MJpegDecodeContext *s) int len , nb_components , i , width , height , bits , pix_fmt_id , ret ; int h_count [ MAX_COMPONENTS ] ; int v_count [ MAX_COMPONENTS ] ; s -> cur_scan = 0; s -> upscale_h = s -> upscale_v = 0; s -> avctx -> bits_per_raw_sample = bits = get_bits ( & s -> gb , 8 ); if ( s -> pegasus_rct )  bits = 9; if ( bits == 9 && ! s -> pegasus_rct )  s -> rct = 1; if ( s -> lossless && s -> avctx -> lowres )  height = get_bits ( & s -> gb , 16 ); width = get_bits ( & s -> gb , 16 ); if ( s -> interlaced && s -> width == width && s -> height == height + 1 )  height = s -> height; if ( av_image_check_size ( width , height , 0 , s -> avctx ) )  nb_components = get_bits ( & s -> gb , 8 ); if ( nb_components <= 0 || nb_components > MAX_COMPONENTS )  if ( s -> interlaced && ( s -> bottom_field == ! s -> interlace_polarity ) )  if ( nb_components != s -> nb_components )  if ( s -> ls && ! ( bits <= 8 || nb_components == 1 ) )  s -> nb_components = nb_components; s -> h_max = 1; s -> v_max = 1; memset ( h_count , 0 , sizeof ( h_count ) ); memset ( v_count , 0 , sizeof ( v_count ) ); for (i = 0; i < nb_components; i++) s -> component_id [ i ] = get_bits ( & s -> gb , 8 ) - 1; h_count [ i ] = get_bits ( & s -> gb , 4 ); v_count [ i ] = get_bits ( & s -> gb , 4 ); if ( h_count [ i ] > s -> h_max )  s -> h_max = h_count [ i ]; if ( v_count [ i ] > s -> v_max )  s -> v_max = v_count [ i ]; s -> quant_index [ i ] = get_bits ( & s -> gb , 8 ); if ( s -> quant_index [ i ] >= 4 )  if ( ! h_count [ i ] || ! v_count [ i ] )  if ( s -> ls && ( s -> h_max > 1 || s -> v_max > 1 ) )  if ( width != s -> width || height != s -> height || bits != s -> bits || memcmp ( s -> h_count , h_count , sizeof ( h_count ) ) || memcmp ( s -> v_count , v_count , sizeof ( v_count ) ) )  