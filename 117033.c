static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_66b_goodG2BSink ( dataArray ); void CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; SNPRINTF ( dest , 100 - 1 , data ); 