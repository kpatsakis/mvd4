void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52_bad() wchar_t * data ; wchar_t dataBuffer [ 250 ] = L "PATH=" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 250 - dataLen - 1 ); CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52b_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52b_badSink(wchar_t * data) CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_badSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_52c_badSink(wchar_t * data) PUTENV ( data ); 