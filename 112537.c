bool OpenArchive(const char *path) int fd ; fd = open ( path , O_RDONLY ); while ( fd == - 1 && errno == EINTR )  if ( fd == - 1 )  if ( fstat ( fd , & sb ) == - 1 || sb . st_size < sizeof ( cdir_end ) )  close ( fd ); mBuf = ( char * ) mmap ( nullptr , sb . st_size , PROT_READ , MAP_SHARED , fd , 0 ); close ( fd ); if ( ! mBuf )  madvise ( mBuf , sb . st_size , MADV_SEQUENTIAL ); mEnd = ( cdir_end * ) ( mBuf + mBuflen - sizeof ( cdir_end ) ); while ( ! mEnd -> Valid ( ) && ( char * ) mEnd > mBuf )  mEnd = ( cdir_end * ) ( ( char * ) mEnd - 1 ); mCdir_limit = mBuf + letoh32 ( mEnd -> cdir_offset ) + letoh32 ( mEnd -> cdir_size ); if ( ! mEnd -> Valid ( ) || mCdir_limit > ( char * ) mEnd )  munmap ( ( void * ) mBuf , mBuflen ); 