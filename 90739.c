void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_12_bad() size_t data ; data = 0; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); data = 20; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  