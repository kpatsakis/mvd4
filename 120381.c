void ff_make_absolute_url(char *buf,int size,const char *base,const char *rel) char * sep ; if ( base && strstr ( base , "://" ) && rel [ 0 ] == '/' )  if ( ! base || strstr ( rel , "://" ) || rel [ 0 ] == '/' )  if ( rel [ 0 ] == 63 )  sep = strrchr ( buf , '/' ); if ( sep )  sep [ 1 ] = '\0'; while ( av_strstart ( rel , "../" , ( ( void * ) 0 ) ) && sep )  sep [ 0 ] = '\0'; if ( ! strcmp ( ( ( sep ? & sep [ 1 ] : buf ) ) , ".." ) )  if ( sep )  sep [ 1 ] = '\0'; 