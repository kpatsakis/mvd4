void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_52_bad() char * data ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_52b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_52c_badSink(char * data) char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 