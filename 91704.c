void CWE690_NULL_Deref_From_Return__char_realloc_12_bad() char * data ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "Initialize" ); if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 