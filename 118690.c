static void goodG2B2() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE665_Improper_Initialization__char_cat_22_goodG2B2Source ( data ); char * CWE665_Improper_Initialization__char_cat_22_goodG2B2Source(char * data) if ( CWE665_Improper_Initialization__char_cat_22_goodG2B2Global )  data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 