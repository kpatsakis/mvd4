static void goodG2B2() wchar_t * data ; data = new wchar_t [ 100 ]; data = goodG2B2Source ( data ); static wchar_t * goodG2B2Source(wchar_t * data) if ( goodG2B2Static )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 