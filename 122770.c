static void goodB2G() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; wchar_t myString [ ] = L "myString" data = wcsdup ( myString ); dataArray [ 2 ] = data; goodB2GSink ( dataArray ); void goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; free ( data ); 