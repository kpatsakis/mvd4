static void goodB2G() twoIntsStruct * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G(twoIntsStruct * dataCopy) data = dataCopy; data = ( twoIntsStruct * ) calloc ( 100 , sizeof ( twoIntsStruct ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_struct_calloc_84_goodB2G() free ( data ); 