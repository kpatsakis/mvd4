static void goodG2B() twoIntsStruct * data ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); goodG2BSink_b ( data ); void goodG2BSink_b(twoIntsStruct * data) goodG2BSink_c ( data ); void goodG2BSink_c(twoIntsStruct * data) goodG2BSink_d ( data ); void goodG2BSink_d(twoIntsStruct * data) free ( data ); 