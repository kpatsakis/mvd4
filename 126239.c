CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_83_bad::~CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_83_bad() wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 