static void goodB2G() struct _twoIntsStruct * data ; data = NULL; data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodB2GSink(struct _twoIntsStruct * data) CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodB2GSink(struct _twoIntsStruct * data) CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodB2GSink(struct _twoIntsStruct * data) free ( data ); 