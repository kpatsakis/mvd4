void CWE369_Divide_by_Zero__int_fgets_divide_66_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); dataArray [ 2 ] = data; CWE369_Divide_by_Zero__int_fgets_divide_66b_badSink ( dataArray ); void CWE369_Divide_by_Zero__int_fgets_divide_66b_badSink(int dataArray[]) int data = dataArray [ 2 ] ; printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 