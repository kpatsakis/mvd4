static void goodG2B() int data ; data = - 1; data = 7; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_82_goodG2B::action(int data) int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; buffer [ i ] = 0; buffer [ data ] = 1; for(i = 0; i < 10; i++) printIntLine ( buffer [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( buffer ); 