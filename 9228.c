static char *				/* O  - Real filename CVE_2014_3537_PATCHED_get_file(cupsd_client_t *con,		/* I  - Client connection struct stat    *filestats,	/* O  - File information char           *filename,	/* IO - Filename buffer int            len)		/* I  - Buffer length */ int status ; char * ptr ; char language [ 7 ] ; language [ 0 ] = '\0'; if ( ! strncmp ( con -> uri , "/ppd/" , 5 ) )  if ( ! strncmp ( con -> uri , "/rss/" , 5 ) && ! strchr ( con -> uri + 5 , '/' ) )  if ( ! strncmp ( con -> uri , "/admin/conf/" , 12 ) )  if ( ! strncmp ( con -> uri , "/admin/log/" , 11 ) )  if ( ! strncmp ( con -> uri + 11 , "access_log" , 10 ) && AccessLog [ 0 ] == '/' )  if ( ! strncmp ( con -> uri + 11 , "error_log" , 9 ) && ErrorLog [ 0 ] == '/' )  if ( ! strncmp ( con -> uri + 11 , "page_log" , 8 ) && PageLog [ 0 ] == '/' )  if ( con -> language )  snprintf ( language , sizeof ( language ) , "/%s" , con -> language -> language ); snprintf ( filename , len , "%s%s" , DocumentRoot , con -> uri ); if ( ( status = stat ( filename , filestats ) ) != 0 && language [ 0 ] && strncmp ( con -> uri , "/ppd/" , 5 ) && strncmp ( con -> uri , "/admin/conf/" , 12 ) && strncmp ( con -> uri , "/admin/log/" , 11 ) )  language [ 3 ] = '\0'; snprintf ( filename , len , "%s%s%s" , DocumentRoot , language , con -> uri ); if ( ( status = lstat ( filename , filestats ) ) != 0 )  snprintf ( filename , len , "%s%s" , DocumentRoot , con -> uri ); if ( ( ptr = strchr ( filename , '?' ) ) != NULL )  * ptr = '\0'; * ptr = '\0'; plen = len - ( ptr - filename ); strlcpy ( ptr , "index.html" , plen ); strlcpy ( ptr , "index.class" , plen ); strlcpy ( ptr , "index.pl" , plen ); strlcpy ( ptr , "index.php" , plen ); strlcpy ( ptr , "index.pyc" , plen ); strlcpy ( ptr , "index.py" , plen ); 