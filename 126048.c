void CWE367_TOC_TOU__stat_17_bad() int j ; for(j = 0; j < 1; j++) char filename [ 100 ] = "" ; if ( fgets ( filename , 100 , stdin ) == NULL )  filename [ 0 ] = '\0'; if ( strlen ( filename ) > 0 )  filename [ strlen ( filename ) - 1 ] = '\0'; fileDesc = OPEN ( filename , O_RDWR ); if ( WRITE ( fileDesc , BAD_SINK_STRING , strlen ( BAD_SINK_STRING ) ) == - 1 )  