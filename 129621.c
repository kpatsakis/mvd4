void CWE369_Divide_by_Zero__int_fgets_divide_63_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE369_Divide_by_Zero__int_fgets_divide_63b_badSink ( & data ); void CWE369_Divide_by_Zero__int_fgets_divide_63b_badSink(int * dataPtr) int data = * dataPtr ; printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 