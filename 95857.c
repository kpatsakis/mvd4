void bad() char * data ; char * dataArray [ 5 ] ; data = NULL; data = new char dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; free ( data ); 