static void goodG2B() char * data ; char * dataArray [ 5 ] ; data = new char [ 100 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 