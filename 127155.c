void bad() int * data ; structType myStruct ; data = NULL; data = new int [ 100 ]; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) int * data = myStruct . structFirst ; free ( data ); 