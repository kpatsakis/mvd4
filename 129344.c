void bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad * badObject = new CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad ( data ) ; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad::CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad(char * dataCopy) data = dataCopy; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete badObject CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad::~CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_84_bad() char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 