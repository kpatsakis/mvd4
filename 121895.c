void CWE464_Addition_of_Data_Structure_Sentinel__basic_66_bad() char charArraySource [ 2 ] ; charArraySource [ 0 ] = ( char ) getc ( stdin ); charArraySource [ 1 ] = '\0'; data = ( char ) atoi ( charArraySource ); dataArray [ 2 ] = data; CWE464_Addition_of_Data_Structure_Sentinel__basic_66b_badSink ( dataArray ); void CWE464_Addition_of_Data_Structure_Sentinel__basic_66b_badSink(char dataArray[]) char data = dataArray [ 2 ] ; charArraySink [ 1 ] = data; charArraySink [ 2 ] = 'z'; charArraySink [ 3 ] = '\0'; printLine ( charArraySink ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 