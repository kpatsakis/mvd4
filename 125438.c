void CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_12_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; strcpy ( data , "fixedstringtest" ); SNPRINTF ( dest , 100 - 1 , data ); SNPRINTF ( dest , 100 - 1 , "%s" , data ); 