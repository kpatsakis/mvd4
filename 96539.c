void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType myStruct ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 