static void goodG2B() int data ; CWE617_Reachable_Assertion__connect_socket_67_structType myStruct ; data = - 1; data = ASSERT_VALUE + 1; myStruct . structFirst = data; CWE617_Reachable_Assertion__connect_socket_67b_goodG2BSink ( myStruct ); void CWE617_Reachable_Assertion__connect_socket_67b_goodG2BSink(CWE617_Reachable_Assertion__connect_socket_67_structType myStruct) int data = myStruct . structFirst ; assert ( data > ASSERT_VALUE ); 