static void goodG2B() vector < size_t > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<size_t> dataVector) size_t data = dataVector [ 2 ] ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 