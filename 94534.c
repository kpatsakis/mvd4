void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_82_base * baseObject = new CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_82_bad baseObject -> action ( data ); void CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_82_bad::action(wchar_t * data) FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 