static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodG2BSink(size_t data) if ( CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_22_goodG2BGlobal )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 