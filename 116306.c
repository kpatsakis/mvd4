static void good1() int k ; for(k = 0; k < 1; k++) if ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood != NULL )  CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood = 0; gStructSigAtomic = ( structSigAtomic * ) malloc ( sizeof ( structSigAtomic ) ); CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood != NULL )  free ( CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood ); CWE364_Signal_Handler_Race_Condition__basic_17StructSigAtomicGood = NULL; 