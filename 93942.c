static void goodG2B2() double * data ; data = NULL; if ( globalFive == 5 )  data = ( double * ) malloc ( sizeof ( * data ) ); * data = 1.7E300; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 