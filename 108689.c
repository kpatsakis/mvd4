static void goodB2G() size_t data ; data = 0; goodB2GSink ( & data ); void goodB2GSink(size_t * dataPtr) size_t data = * dataPtr ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 