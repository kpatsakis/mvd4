void av_pkt_dump2(FILE *f,AVPacket *pkt,int dump_payload,AVStream *st) pkt_dump_internal ( ( ( void * ) 0 ) , f , 0 , pkt , dump_payload , st -> time_base ); static void pkt_dump_internal(void *avcl,FILE *f,int level,AVPacket *pkt,int dump_payload,AVRational time_base) if ( ! f )  fprintf ( f , "  keyframe=%d\n" , ( pkt -> flags & 0x1 ) != 0 ); while ( 0 )  if ( ! f )  fprintf ( f , "  duration=%0.3f\n" , ( pkt -> duration ) * av_q2d ( time_base ) ); if ( ! f )  fprintf ( f , "  dts=" ); if ( ! f )  fprintf ( f , "N/A" ); 