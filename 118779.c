static void goodG2B() char * data ; data = NULL; CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B * goodG2BObject = new CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B ( data ) ; CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B::CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B(char * dataCopy) data = dataCopy; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; delete goodG2BObject CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B::~CWE124_Buffer_Underwrite__malloc_char_ncpy_84_goodG2B() char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 