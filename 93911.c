status_t MPEG4Extractor::readMetaData() if ( mInitCheck != NO_INIT )  int psshsize = 0 ; for (size_t i = 0; i < mPssh.size(); i++) psshsize += 20 + mPssh [ i ] . datalen; if ( psshsize )  char * buf = ( char * ) malloc ( psshsize ) ; char * ptr = buf ; for (size_t i = 0; i < mPssh.size(); i++) memcpy ( ptr , mPssh [ i ] . uuid , 20 ); memcpy ( ptr + 20 , mPssh [ i ] . data , mPssh [ i ] . datalen ); ptr += ( 20 + mPssh [ i ] . datalen ); 