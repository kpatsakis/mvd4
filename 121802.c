static void goodG2B() int data ; int dataArray [ 5 ] ; data = - 1; data = ASSERT_VALUE + 1; dataArray [ 2 ] = data; CWE617_Reachable_Assertion__fscanf_66b_goodG2BSink ( dataArray ); void CWE617_Reachable_Assertion__fscanf_66b_goodG2BSink(int dataArray[]) int data = dataArray [ 2 ] ; assert ( data > ASSERT_VALUE ); 