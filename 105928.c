void CWE665_Improper_Initialization__char_cat_66_bad() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] ; data = dataBuffer; dataArray [ 2 ] = data; CWE665_Improper_Initialization__char_cat_66b_badSink ( dataArray ); void CWE665_Improper_Initialization__char_cat_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 