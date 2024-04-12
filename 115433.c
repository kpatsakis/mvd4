static iseries_seek_read (wtap * wth, gint64 seek_off, struct wtap_pkthdr Buffer * buf, int *err, gchar ** err_info) if ( file_seek ( wth -> random_fh , seek_off - 1 , SEEK_SET , err ) == - 1 )  return iseries_parse_packet ( wth , wth -> random_fh , phdr , buf , err , err_info ) ; static iseries_parse_packet (wtap * wth, FILE_T fh, struct wtap_pkthdr Buffer *buf, int *err, gchar **err_info) iseries_t * iseries = ( iseries_t * ) wth -> priv ; gint64 cur_off ; gboolean isValid , isCurrentPacket ; int num_items_scanned , line , pktline , buflen ; char direction [ 2 ] , destmac [ 13 ] , srcmac [ 13 ] , type [ 5 ] , csec [ 9 + 1 ] ; char data [ ISERIES_LINE_LENGTH * 2 ] ; int offset ; char * ascii_buf ; int ascii_offset ; isValid = FALSE; for (line = 1; line < ISERIES_PKT_LINES_TO_CHECK; line++) if ( file_gets ( data , ISERIES_LINE_LENGTH , fh ) == NULL )  num_items_scanned sscanf ( data "%*[ \n\t]%6d%*[ *\n\t]%1s%*[ \n\t]%6d%*[ \n\t]%2d:%2d:%2d.%9[0-9]%*[ "%12s%*[ \n\t]%12s%*[ \n\t]ETHV2%*[ \n\t]TYPE:%*[ \n\t]%4s" & pktnum , direction , & pkt_len , & hr , & min , & sec , csec , destmac srcmac , type ) if ( num_items_scanned == 10 )  isValid = TRUE; if ( ! isValid )  ascii_buf = ( char * ) g_malloc ( ISERIES_PKT_ALLOC_SIZE ); ascii_offset = 14 * 2; isCurrentPacket = TRUE; pktline = 0; while ( isCurrentPacket )  pktline ++; if ( file_gets ( data , ISERIES_LINE_LENGTH , fh ) == NULL )  * err = file_error ( fh , err_info ); if ( * err == 0 )  if ( iseries -> format == ISERIES_FORMAT_UNICODE )  buflen = iseries_UNICODE_to_ASCII ( ( guint8 * ) data , ISERIES_LINE_LENGTH ); static iseries_UNICODE_to_ASCII (guint8 * buf, guint bytes) guint i ; for (i = 0; i < bytes; i++) if ( buf [ i ] == 0x0A )  return i ; return i ; buflen = ( int ) strlen ( data ); for (offset = 0; g_ascii_isspace(data[offset]); offset++) if ( offset == 22 )  if ( strncmp ( data + 22 , "IP Header  :  " , 14 ) == 0 || strncmp ( data + 22 , "IPv6 Header:  " , 14 ) == 0 || strncmp ( data + 22 , "ARP Header :  " , 14 ) == 0 || strncmp ( data + 22 , "TCP Header :  " , 14 ) == 0 || strncmp ( data + 22 , "UDP Header :  " , 14 ) == 0 || strncmp ( data + 22 , "ICMP Header:  " , 14 ) == 0 || strncmp ( data + 22 , "ICMPv6  Hdr:  " , 14 ) == 0 || strncmp ( data + 22 , "Option  Hdr:  " , 14 ) == 0 )  ascii_offset = append_hex_digits ( ascii_buf , ascii_offset , ISERIES_PKT_ALLOC_SIZE - 1 , data + 22 + 14 , err , err_info ); static append_hex_digits(char *ascii_buf, int ascii_offset, int char *data, int *err, gchar **err_info) int in_offset , out_offset ; int c ; unsigned int i ; gboolean overflow = FALSE ; in_offset = 0; out_offset = ascii_offset; for (i = 0; i < 16; i++, in_offset++) c = data [ in_offset ] & 0xFF; if ( c == '\0' || c == ' ' || c == '*' || c == '\r' || c == '\n' )  if ( ! g_ascii_isxdigit ( c ) || g_ascii_islower ( c ) )  return ascii_offset ; if ( out_offset >= max_offset )  overflow = TRUE; ascii_buf [ out_offset ] = c; out_offset ++; for (; (data[in_offset] & 0xFF) == ' '; in_offset++) if ( ( i % 2 ) != 0 )  return - 1 ; if ( overflow )  return - 1 ; return out_offset ; if ( ascii_offset == - 1 )  if ( offset == 9 )  if ( strncmp ( data + 9 , "Data . . . . . :  " , 18 ) == 0 )  ascii_offset = append_hex_digits ( ascii_buf , ascii_offset , ISERIES_PKT_ALLOC_SIZE - 1 , data + 9 + 18 , err , err_info ); static append_hex_digits(char *ascii_buf, int ascii_offset, int char *data, int *err, gchar **err_info) int in_offset , out_offset ; int c ; unsigned int i ; gboolean overflow = FALSE ; in_offset = 0; out_offset = ascii_offset; c = data [ in_offset ] & 0xFF; if ( c == '\0' || c == ' ' || c == '*' || c == '\r' || c == '\n' )  if ( ! g_ascii_isxdigit ( c ) || g_ascii_islower ( c ) )  return ascii_offset ; if ( out_offset >= max_offset )  overflow = TRUE; ascii_buf [ out_offset ] = c; out_offset ++; if ( ( i % 2 ) != 0 )  return - 1 ; if ( overflow )  return - 1 ; return out_offset ; if ( ascii_offset == - 1 )  if ( offset == 36 || offset == 27 )  ascii_offset = append_hex_digits ( ascii_buf , ascii_offset , ISERIES_PKT_ALLOC_SIZE - 1 , data + offset , err , err_info ); static append_hex_digits(char *ascii_buf, int ascii_offset, int char *data, int *err, gchar **err_info) int in_offset , out_offset ; int c ; unsigned int i ; gboolean overflow = FALSE ; in_offset = 0; out_offset = ascii_offset; c = data [ in_offset ] & 0xFF; if ( c == '\0' || c == ' ' || c == '*' || c == '\r' || c == '\n' )  if ( ! g_ascii_isxdigit ( c ) || g_ascii_islower ( c ) )  return ascii_offset ; if ( out_offset >= max_offset )  overflow = TRUE; ascii_buf [ out_offset ] = c; out_offset ++; if ( ( i % 2 ) != 0 )  return - 1 ; if ( overflow )  return - 1 ; return out_offset ; if ( ascii_offset == - 1 )  num_items_scanned = sscanf ( data + 78 , "%*[ \n\t]ETHV2%*[ .:\n\t]TYPE%*[ .:\n\t]%4s" , type ); if ( ( num_items_scanned == 1 ) && pktline > 1 )  isCurrentPacket = FALSE; cur_off = file_tell ( fh ); if ( cur_off == - 1 )  if ( file_seek ( fh , cur_off - buflen , SEEK_SET , err ) == - 1 )  ascii_buf [ ascii_offset ] = '\0'; iseries_parse_hex_string ( ascii_buf , ws_buffer_start_ptr ( buf ) , strlen ( ascii_buf ) ); static iseries_parse_hex_string (const char * ascii, guint8 * buf, size_t len) size_t i ; gint hexvalue ; for (i = 0; i < len; i++) hexvalue = g_ascii_xdigit_value ( ascii [ i ] ); i ++; if ( hexvalue == - 1 )  return FALSE ; if ( i >= len )  return FALSE ; hexvalue = g_ascii_xdigit_value ( ascii [ i ] ); if ( hexvalue == - 1 )  return FALSE ; return TRUE ; 