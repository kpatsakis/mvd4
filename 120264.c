void bad() long * data ; structType myStruct ; data = NULL; data = new long myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) long * data = myStruct . structFirst ; free ( data ); 