static CVE_2015_1158_VULN_send_document(cupsd_client_t  *con,	/* I - Client connection ipp_attribute_t *uri)	/* I - Printer URI */ ipp_attribute_t * attr ; ipp_attribute_t * format ; const char * default_format ; int jobid ; cupsd_job_t * job ; char job_uri [ HTTP_MAX_URI ] , scheme [ HTTP_MAX_URI ] , username [ HTTP_MAX_URI ] , host [ HTTP_MAX_URI ] , resource [ HTTP_MAX_URI ] ; char super [ MIME_MAX_SUPER ] , type [ MIME_MAX_TYPE ] , mimetype [ MIME_MAX_SUPER + MIME_MAX_TYPE + 2 ] ; cupsd_printer_t * printer ; if ( ! strcmp ( uri -> name , "printer-uri" ) )  if ( ( attr = ippFindAttribute ( con -> request , "job-id" , IPP_TAG_INTEGER ) ) == NULL )  jobid = attr -> values [ 0 ] . integer; if ( strncmp ( resource , "/jobs/" , 6 ) )  jobid = atoi ( resource + 6 ); if ( ( job = cupsdFindJob ( jobid ) ) == NULL )  printer = cupsdFindDest ( job -> dest ); if ( ! validate_user ( job , con , job -> username , username , sizeof ( username ) ) )  if ( ( attr = ippFindAttribute ( con -> request , "compression" , IPP_TAG_KEYWORD ) ) != NULL )  if ( ( attr = ippFindAttribute ( con -> request , "last-document" , IPP_TAG_BOOLEAN ) ) == NULL )  if ( ! con -> filename )  if ( ( format = ippFindAttribute ( con -> request , "document-format" , IPP_TAG_MIMETYPE ) ) != NULL )  if ( sscanf ( format -> values [ 0 ] . string . text , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ( default_format = cupsGetOption ( "document-format" , printer -> num_options , printer -> options ) ) != NULL )  if ( sscanf ( default_format , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ! strcmp ( super , "application" ) && ! strcmp ( type , "octet-stream" ) )  