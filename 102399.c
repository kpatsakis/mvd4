static void goodG2B2() char * data ; char dataGoodBuffer [ 100 ] ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; if ( globalFive == 5 )  data = dataGoodBuffer; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 