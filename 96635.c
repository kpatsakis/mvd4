void CWE123_Write_What_Where_Condition__fgets_52_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( fgets ( ( char * ) & data , sizeof ( data ) , stdin ) == NULL )  CWE123_Write_What_Where_Condition__fgets_52b_badSink ( data ); void CWE123_Write_What_Where_Condition__fgets_52b_badSink(badStruct data) CWE123_Write_What_Where_Condition__fgets_52c_badSink ( data ); void CWE123_Write_What_Where_Condition__fgets_52c_badSink(badStruct data) linkedListPrev = data . list . prev; linkedListNext = data . list . next; linkedListPrev -> next = linkedListNext; linkedListNext -> prev = linkedListPrev; 