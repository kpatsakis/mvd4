void CWE364_Signal_Handler_Race_Condition__basic_17_bad() int j ; for(j = 0; j < 1; j++) if ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad != NULL )  free ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad ); CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad = NULL; gStructSigAtomic = ( structSigAtomic * ) malloc ( sizeof ( structSigAtomic ) ); CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad != NULL )  CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicBad = NULL; 