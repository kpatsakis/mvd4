static void goodG2B() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wchar_t * data = * dataPtr1 ; wcscpy ( data , GOOD_OS_COMMAND ); * dataPtr1 = data; pipe = POPEN ( data , L "wb" ) if ( pipe != NULL )  PCLOSE ( pipe ); 