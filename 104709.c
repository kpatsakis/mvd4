void bad() char * data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_82_bad::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; SNPRINTF ( data , 100 , "%s" , source ); 