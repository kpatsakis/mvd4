void CWE469_Use_of_Pointer_Subtraction_to_Determine_Size__char_07_bad() if ( staticFive == 5 )  char string1 [ ] = SOURCE_STRING ; char * slashInString1 ; slashInString1 = strchr ( string1 , '/' ); if ( slashInString1 == NULL )  indexOfSlashInString1 = ( size_t ) ( slashInString1 - string2 ); printUnsignedLine ( indexOfSlashInString1 ); void printUnsignedLine(unsigned unsignedNumber) printf ( "%u\n" , unsignedNumber ); 