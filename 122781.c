static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_52b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_52c_goodG2BSink(char * data) free ( data ); 