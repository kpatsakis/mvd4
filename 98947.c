void bad() wchar_t * data ; unionType myUnion ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 