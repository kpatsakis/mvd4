static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__char_connect_socket_printf_66b_goodG2BSink ( dataArray ); void CWE134_Uncontrolled_Format_String__char_connect_socket_printf_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; printf ( data ); 