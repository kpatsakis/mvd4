void CWE401_Memory_Leak__malloc_realloc_struct_twoIntsStruct_15_bad() switch ( 6 )  struct _twoIntsStruct * data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ) ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; data = ( struct _twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( struct _twoIntsStruct ) ); if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 