static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_52b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_52c_goodG2BSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 