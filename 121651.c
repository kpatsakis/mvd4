void perilaus_alights(int aqualunger_unpetrify,sublumbar_officeless sant_organical) struct stonesoup_data * dataStruct = malloc ( sizeof ( struct stonesoup_data ) ) ; if ( dataStruct )  dataStruct -> inc_amount = 1; dataStruct -> data = malloc ( sizeof ( char ) * ( strlen ( chiropractics_charquid ) + 1 ) ); dataStruct -> file1 = malloc ( sizeof ( char ) * ( strlen ( chiropractics_charquid ) + 1 ) ); dataStruct -> file2 = malloc ( sizeof ( char ) * ( strlen ( chiropractics_charquid ) + 1 ) ); if ( dataStruct -> data )  if ( ( sscanf ( chiropractics_charquid , "%d %s %s %s" , & ( dataStruct -> qsize ) , dataStruct -> file1 , dataStruct -> file2 , dataStruct -> data ) == 4 ) && ( strlen ( dataStruct -> data ) != 0 ) && ( strlen ( dataStruct -> file1 ) != 0 ) && ( strlen ( dataStruct -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , dataStruct -> qsize , & ( dataStruct -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , dataStruct -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , dataStruct -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , dataStruct -> file2 , "INITIAL-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , calcIncamount , ( void * ) ( dataStruct ) ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toPound , ( void * ) ( dataStruct ) ) != 0 )  free ( dataStruct -> data ); free ( dataStruct ); 