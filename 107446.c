static CVE_2015_1158_PATCHED_send_document(cupsd_client_t  *con,	/* I - Client connection ipp_attribute_t *uri)	/* I - Printer URI */ ipp_attribute_t * attr ; int jobid ; cupsd_job_t * job ; char job_uri [ HTTP_MAX_URI ] , scheme [ HTTP_MAX_URI ] , username [ HTTP_MAX_URI ] , host [ HTTP_MAX_URI ] , resource [ HTTP_MAX_URI ] ; if ( ! strcmp ( uri -> name , "printer-uri" ) )  if ( ( attr = ippFindAttribute ( con -> request , "job-id" , IPP_TAG_INTEGER ) ) == NULL )  jobid = attr -> values [ 0 ] . integer; if ( strncmp ( resource , "/jobs/" , 6 ) )  jobid = atoi ( resource + 6 ); if ( ( job = cupsdFindJob ( jobid ) ) == NULL )  if ( ! validate_user ( job , con , job -> username , username , sizeof ( username ) ) )  if ( ( attr = ippFindAttribute ( con -> request , "compression" , IPP_TAG_KEYWORD ) ) != NULL )  if ( ! strcmp ( attr -> values [ 0 ] . string . text , "gzip" ) )  