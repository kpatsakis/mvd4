static void goodB2G() void * data ; void * dataArray [ 5 ] ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__CWE135_66b_goodB2GSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_66b_goodB2GSink(void * dataArray[]) void * data = dataArray [ 2 ] ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 