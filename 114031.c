void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wcscpy ( data , BAD_SOURCE_FIXED_STRING ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52b_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52b_badSink(wchar_t * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52c_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52c_badSink(wchar_t * data) free ( data ); 