static void goodG2B() double * data ; data = NULL; data = ( double * ) malloc ( sizeof ( * data ) ); * data = 1.7E300; CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_goodG2BSink(double * data) CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_goodG2BSink(double * data) printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 