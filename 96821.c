void *doStuff(void *ssD) struct stonesoup_data2 * ssD2 ; ssD2 = init_stonesoup_data2 ( ( struct stonesoup_data * ) ssD ); struct stonesoup_data2 *init_stonesoup_data2 (struct stonesoup_data *ssD) if ( ssD2 == NULL )  if ( ssD2 == NULL )  stonesoup_readFile ( ssD -> file2 ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); fclose ( fifo ); 