void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_bad() struct _twoIntsStruct * data ; data = NULL; data = ( struct _twoIntsStruct * ) realloc ( data , 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_badSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_badSink(struct _twoIntsStruct * data) 