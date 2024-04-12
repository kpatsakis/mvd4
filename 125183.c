static void ide_atapi_cmd_reply(IDEState *s, int size, int max_size) if ( size > max_size )  size = max_size; s -> lba = - 1; s -> packet_transfer_size = size; s -> io_buffer_size = size; s -> elementary_transfer_size = 0; s -> io_buffer_index = 0; if ( s -> atapi_dma )  s -> status = READY_STAT | SEEK_STAT | DRQ_STAT; s -> status = READY_STAT | SEEK_STAT; ide_atapi_cmd_reply_end ( s ); static void ide_atapi_cmd_reply_end(IDEState *s) int byte_count_limit , size , ret ; if ( s -> packet_transfer_size <= 0 )  s -> status = READY_STAT | SEEK_STAT; s -> nsector = ( s -> nsector & ~7 ) | ATAPI_INT_REASON_IO | ATAPI_INT_REASON_CD; if ( s -> lba != - 1 && s -> io_buffer_index >= s -> cd_sector_size )  ret = cd_read_sector ( s -> bs , s -> lba , s -> io_buffer , s -> cd_sector_size ); static int cd_read_sector(BlockDriverState *bs, int lba, uint8_t int sector_size) int ret ; switch ( sector_size )  ret = bdrv_read ( bs , ( int64_t ) lba << 2 , buf , 4 ); ret = bdrv_read ( bs , ( int64_t ) lba << 2 , buf + 16 , 4 ); if ( ret < 0 )  cd_data_to_raw ( buf , lba ); static void cd_data_to_raw(uint8_t *buf, int lba) buf [ 0 ] = 0x00; memset ( buf + 1 , 0xff , 10 ); buf [ 11 ] = 0x00; buf += 12; buf [ 3 ] = 0x01; buf += 4; buf += 2048; memset ( buf , 0 , 288 ); 