static void goodB2G() size_t data ; structType myStruct ; data = 0; data = rand ( ); myStruct . structFirst = data; goodB2GSink ( myStruct ); void goodB2GSink(structType myStruct) size_t data = myStruct . structFirst ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  