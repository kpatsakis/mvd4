static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B(char * dataCopy) data = dataCopy; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_goodG2B() char dest [ 50 ] = "" ; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 