void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_bad() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType myStruct ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType myStruct) char * data = myStruct . structFirst ; free ( data ); 