void bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad * badObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad::CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad(size_t dataCopy) data = dataCopy; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); printLine ( "fgets() failed." ); delete badObject CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_84_bad() if ( data > strlen ( HELLO_STRING ) )  