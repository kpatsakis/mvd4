void bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( fgets ( ( char * ) & data , sizeof ( data ) , stdin ) == NULL )  baseObject -> action ( data ); void CWE123_Write_What_Where_Condition__fgets_82_bad::action(badStruct data) linkedListPrev = data . list . prev; linkedListNext = data . list . next; linkedListPrev -> next = linkedListNext; linkedListNext -> prev = linkedListPrev; 