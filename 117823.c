void CWE364_Signal_Handler_Race_Condition__basic_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; gStructSigAtomic = ( structSigAtomic * ) malloc ( sizeof ( structSigAtomic ) ); CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicBad = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicBad -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicBad != NULL )  free ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicBad ); CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood != NULL )  free ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood ); 