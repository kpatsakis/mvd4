static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B * goodG2BObject = new CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B::CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wcscpy ( data , L "fixedstringtest" ) delete goodG2BObject CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B::~CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_84_goodG2B() goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 