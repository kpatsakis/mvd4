static void goodG2B2() wchar_t * password ; password = L "" password = CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_22_goodG2B2Source ( password ); wchar_t * CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_22_goodG2B2Source(wchar_t * password) if ( CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_22_goodG2B2Global )  password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( wchar_t ) ) )  return password ; 