static void goodG2B() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); dataArray [ 2 ] = data; CWE415_Double_Free__malloc_free_struct_66b_goodG2BSink ( dataArray ); void CWE415_Double_Free__malloc_free_struct_66b_goodG2BSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; free ( data ); 