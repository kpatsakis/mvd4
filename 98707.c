int main() char * temp , * temp1 ; int i , len = 0 , comp_size ; temp1 = ( char * ) malloc ( 400 * sizeof ( char ) ); temp = temp1; strcpy ( temp , "HEADER JUNK:" ); len += strlen ( temp ); len += comp_size; len += 10; len += comp_size; len += 16; printf ( "len = %d\n" , len ); for(i=0; i<len; i++, p++)  /* write record into file fputc(*p, f); 