static void goodB2G() struct _twoIntsStruct * data ; data = NULL; CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G * goodB2GObject = new CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G ( data ) ; CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G::CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G(struct _twoIntsStruct * dataCopy) data = dataCopy; data = ( struct _twoIntsStruct * ) realloc ( data , 100 * sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); delete goodB2GObject CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G::~CWE401_Memory_Leak__struct_twoIntsStruct_realloc_84_goodB2G() free ( data ); 