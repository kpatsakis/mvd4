void bad() size_t data ; structType myStruct ; data = 0; data = rand ( ); myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) size_t data = myStruct . structFirst ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 