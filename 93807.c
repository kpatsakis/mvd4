static CVE_2015_1158_PATCHED_send_document(cupsd_client_t  *con,	/* I - Client connection ipp_attribute_t *uri)	/* I - Printer URI */ ipp_attribute_t * attr ; ipp_attribute_t * format ; const char * default_format ; int jobid ; cupsd_job_t * job ; char job_uri [ HTTP_MAX_URI ] , scheme [ HTTP_MAX_URI ] , username [ HTTP_MAX_URI ] , host [ HTTP_MAX_URI ] , resource [ HTTP_MAX_URI ] ; mime_type_t * filetype ; char super [ MIME_MAX_SUPER ] , type [ MIME_MAX_TYPE ] , mimetype [ MIME_MAX_SUPER + MIME_MAX_TYPE + 2 ] ; cupsd_printer_t * printer ; struct stat fileinfo ; int kbytes ; int compression ; if ( ! strcmp ( uri -> name , "printer-uri" ) )  if ( ( attr = ippFindAttribute ( con -> request , "job-id" , IPP_TAG_INTEGER ) ) == NULL )  jobid = attr -> values [ 0 ] . integer; if ( strncmp ( resource , "/jobs/" , 6 ) )  jobid = atoi ( resource + 6 ); if ( ( job = cupsdFindJob ( jobid ) ) == NULL )  printer = cupsdFindDest ( job -> dest ); if ( ! validate_user ( job , con , job -> username , username , sizeof ( username ) ) )  compression = CUPS_FILE_NONE; if ( ( attr = ippFindAttribute ( con -> request , "compression" , IPP_TAG_KEYWORD ) ) != NULL )  if ( ! strcmp ( attr -> values [ 0 ] . string . text , "gzip" ) )  compression = CUPS_FILE_GZIP; if ( ( attr = ippFindAttribute ( con -> request , "last-document" , IPP_TAG_BOOLEAN ) ) == NULL )  if ( ! con -> filename )  if ( job -> num_files > 0 && attr -> values [ 0 ] . boolean )  if ( ( format = ippFindAttribute ( con -> request , "document-format" , IPP_TAG_MIMETYPE ) ) != NULL )  if ( sscanf ( format -> values [ 0 ] . string . text , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ( default_format = cupsGetOption ( "document-format" , printer -> num_options , printer -> options ) ) != NULL )  if ( sscanf ( default_format , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ! strcmp ( super , "application" ) && ! strcmp ( type , "octet-stream" ) )  ipp_attribute_t * doc_name ; doc_name = ippFindAttribute ( con -> request , "document-name" , IPP_TAG_NAME ); filetype = mimeFileType ( MimeDatabase , con -> filename , doc_name ? doc_name -> values [ 0 ] . string . text : NULL , & compression ); if ( ! filetype )  filetype = mimeType ( MimeDatabase , super , type ); filetype = mimeType ( MimeDatabase , super , type ); if ( filetype )  if ( ! filetype )  if ( printer -> filetypes && ! cupsArrayFind ( printer -> filetypes , filetype ) )  if ( add_file ( con , job , filetype , compression ) )  if ( stat ( con -> filename , & fileinfo ) )  kbytes = 0; kbytes = ( fileinfo . st_size + 1023 ) / 1024; job -> koctets += kbytes; if ( ( attr = ippFindAttribute ( job -> attrs , "job-k-octets" , IPP_TAG_INTEGER ) ) != NULL )  attr -> values [ 0 ] . integer += kbytes; if ( ( attr = ippFindAttribute ( con -> request , "last-document" , IPP_TAG_BOOLEAN ) ) != NULL && attr -> values [ 0 ] . boolean )  if ( ( attr = ippFindAttribute ( job -> attrs , "job-hold-until" , IPP_TAG_KEYWORD ) ) == NULL )  attr = ippFindAttribute ( job -> attrs , "job-hold-until" , IPP_TAG_NAME ); if ( ! attr || ! strcmp ( attr -> values [ 0 ] . string . text , "no-hold" ) )  