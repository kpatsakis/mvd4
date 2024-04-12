status_t MPEG4Extractor::parseMetaData(off64_t offset, size_t size) if ( size < 4 )  uint8_t * buffer = new uint8_t [ size + 1 ] ; if ( mDataSource -> readAt ( offset , buffer , size ) != ( ssize_t ) size )  buffer = NULL; if ( size == 9 && flags == 21 )  char tmp [ 16 ] ; sprintf ( tmp , "%d" , ( int ) buffer [ size - 1 ] ); if ( size == 16 && flags == 0 )  char tmp [ 16 ] ; uint16_t * pTrack = ( uint16_t * ) & buffer [ 10 ] ; uint16_t * pTotalTracks = ( uint16_t * ) & buffer [ 12 ] ; sprintf ( tmp , "%d/%d" , ntohs ( * pTrack ) , ntohs ( * pTotalTracks ) ); if ( ( size == 14 || size == 16 ) && flags == 0 )  char tmp [ 16 ] ; uint16_t * pDisc = ( uint16_t * ) & buffer [ 10 ] ; uint16_t * pTotalDiscs = ( uint16_t * ) & buffer [ 12 ] ; sprintf ( tmp , "%d/%d" , ntohs ( * pDisc ) , ntohs ( * pTotalDiscs ) ); mFileMetaData -> setCString ( kKeyDiscNumber , tmp ); 