rlc_decipher_tvb(tvbuff_t *tvb, packet_info *pinfo, guint32 counter, guint8 rbid, gboolean dir, guint8 header_size) out = wmem_alloc0 ( wmem_packet_scope ( ) , strlen ( global_rlc_kasumi_key ) + 1 ); memcpy ( out , global_rlc_kasumi_key , strlen ( global_rlc_kasumi_key ) ); key_in = translate_hex_key ( out ); static guint8 translate_hex_key(gchar * char_key) int i , j ; j = ( int ) ( strlen ( char_key ) / 2 ) - 1; key_in [ j ] = ( ( guint8 ) ( strtol ( & char_key [ i - 2 ] , NULL , 16 ) ) ); j --; return key_in ; 