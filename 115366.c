void bad() int data ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE617_Reachable_Assertion__fgets_82_base * baseObject = new CWE617_Reachable_Assertion__fgets_82_bad baseObject -> action ( data ); void CWE617_Reachable_Assertion__fgets_82_bad::action(int data) assert ( data > ASSERT_VALUE ); 