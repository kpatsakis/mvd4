void CWE617_Reachable_Assertion__fgets_42_bad() int data ; data = - 1; data = badSource ( data ); static int badSource(int data) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); return data ; assert ( data > ASSERT_VALUE ); 