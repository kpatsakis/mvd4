static void goodB2G() char * data ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); CWE690_NULL_Deref_From_Return__char_calloc_82_base * baseObject = new CWE690_NULL_Deref_From_Return__char_calloc_82_goodB2G baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__char_calloc_82_goodB2G::action(char * data) if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 