static void goodG2B() TwoIntsClass * data ; data = NULL; data = new TwoIntsClass [ 100 ]; goodG2BSink ( data ); void goodG2BSink(TwoIntsClass * data) TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 