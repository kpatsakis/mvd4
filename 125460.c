static void goodG2B() char * data ; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType myStruct ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 