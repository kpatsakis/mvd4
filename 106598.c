static void goodB2G() long * data ; data = ( long * ) malloc ( 100 * sizeof ( long ) ); goodB2GSink_b ( data ); void goodB2GSink_b(long * data) goodB2GSink_c ( data ); void goodB2GSink_c(long * data) goodB2GSink_d ( data ); void goodB2GSink_d(long * data) goodB2GSink_e ( data ); void goodB2GSink_e(long * data) free ( data ); 