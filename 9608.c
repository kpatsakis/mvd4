static void goodB2G() size_t data ; data = rand ( ); baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_rand_82_goodB2G::action(size_t data) if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 