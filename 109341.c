CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_83_goodB2G::~CWE789_Uncontrolled_Mem_Alloc__new_char_fgets_83_goodB2G() char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 