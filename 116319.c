static void goodG2B() twoIntsStruct * data ; twoIntsStruct * dataGoodBuffer = ( twoIntsStruct * ) ALLOCA ( 100 * sizeof ( twoIntsStruct ) ) ; data = dataGoodBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_82_goodG2B::action(twoIntsStruct * data) twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intOne = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); 