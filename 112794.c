int avfilter_open(AVFilterContext **filter_ctx,AVFilter *filter,const char *inst_name) AVFilterContext * ret ; if ( ! filter )  ret = ( av_mallocz ( sizeof ( AVFilterContext ) ) ); if ( ! ret )  ret -> av_class = & avfilter_class; ret -> filter = filter; ret -> name = ( inst_name ? av_strdup ( inst_name ) : ( ( void * ) 0 ) ); if ( filter -> priv_size )  ret -> priv = av_mallocz ( ( filter -> priv_size ) ); if ( ! ret -> priv )  ret -> nb_inputs = ( pad_count ( filter -> inputs ) ); static int pad_count(const AVFilterPad *pads) int count ; if ( ! pads )  return 0 ; for (count = 0; pads -> name; count++) pads ++; return count ; if ( ret -> nb_inputs )  ret -> input_pads = ( av_malloc ( sizeof ( AVFilterPad ) * ( ret -> nb_inputs ) ) ); if ( ! ret -> input_pads )  memcpy ( ( ret -> input_pads ) , ( filter -> inputs ) , sizeof ( AVFilterPad ) * ( ret -> nb_inputs ) ); ret -> inputs = ( av_mallocz ( sizeof ( AVFilterLink * ) * ( ret -> nb_inputs ) ) ); if ( ! ret -> inputs )  ret -> nb_outputs = ( pad_count ( filter -> outputs ) ); static int pad_count(const AVFilterPad *pads) int count ; if ( ! pads )  return 0 ; pads ++; return count ; if ( ret -> nb_outputs )  ret -> output_pads = ( av_malloc ( sizeof ( AVFilterPad ) * ( ret -> nb_outputs ) ) ); if ( ! ret -> output_pads )  memcpy ( ( ret -> output_pads ) , ( filter -> outputs ) , sizeof ( AVFilterPad ) * ( ret -> nb_outputs ) ); ret -> outputs = ( av_mallocz ( sizeof ( AVFilterLink * ) * ( ret -> nb_outputs ) ) ); if ( ! ret -> outputs )  ret -> output_count = ret -> nb_outputs; ret -> input_count = ret -> nb_inputs; * filter_ctx = ret; av_freep ( ( & ret -> outputs ) ); 