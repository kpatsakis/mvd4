void *to1337(void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; int random ; char temp ; char * temp_str ; int * stonesoup_arr ; stonesoup_arr = malloc ( sizeof ( int ) * stonesoupData -> qsize ); if ( stonesoup_arr != NULL )  for (i = 0; i < stonesoupData->qsize; i++) stonesoup_arr [ i ] = stonesoupData -> qsize - i; temp_str = malloc ( sizeof ( char ) * ( stonesoupData -> data_size + 1 ) ); i = 0; while ( stonesoupData -> data [ i ] != '\0' )  random = ( int ) ( rand ( ) / ( double ) RAND_MAX + 0.5 ); switch ( stonesoupData -> data [ i ] )  if ( random == 0 )  temp = '<'; temp = 'c'; if ( random == 0 )  temp = '3'; temp = 'e'; if ( random == 0 )  temp = '1'; temp = 'i'; if ( random == 0 )  temp = '1'; temp = 'l'; if ( random == 0 )  temp = '0'; temp = 'o'; if ( random == 0 )  temp = '5'; temp = 's'; if ( random == 0 )  temp = '7'; temp = 't'; temp = stonesoupData -> data [ i ]; temp_str [ i ] = temp; i ++; 