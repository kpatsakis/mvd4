void bad() twoIntsStruct * data ; data = NULL; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); badSink_b ( data ); void badSink_b(twoIntsStruct * data) badSink_c ( data ); void badSink_c(twoIntsStruct * data) badSink_d ( data ); void badSink_d(twoIntsStruct * data) badSink_e ( data ); void badSink_e(twoIntsStruct * data) delete data 