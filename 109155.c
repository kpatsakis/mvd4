void revocation_perkiomenville(char **hambley_spookologist) int telegn_paine = 45 ; char * decoagulated_halvers ; stonesoup_read_taint ( & decoagulated_halvers , "6148" , telegn_paine ); void stonesoup_read_taint(char** stonesoup_tainted_buff, char* stonesoup_envKey, int stonesoup_shmsz) int stonesoup_shmid ; key_t stonesoup_key ; char * stonesoup_shm , * stonesoup_s ; * stonesoup_tainted_buff = NULL; if ( getenv ( "STONESOUP_DISABLE_WEAKNESS" ) == NULL || strcmp ( getenv ( "STONESOUP_DISABLE_WEAKNESS" ) , "1" ) != 0 )  if ( stonesoup_envKey != NULL )  if ( sscanf ( stonesoup_envKey , "%d" , & stonesoup_key ) > 0 )  if ( ( stonesoup_shmid = shmget ( stonesoup_key , stonesoup_shmsz , 0666 ) ) >= 0 )  if ( ( stonesoup_shm = shmat ( stonesoup_shmid , NULL , 0 ) ) != ( char * ) - 1 )  * stonesoup_tainted_buff = ( char * ) calloc ( stonesoup_shmsz , sizeof ( char ) ); for (stonesoup_s = stonesoup_shm; *stonesoup_s != (char)0; stonesoup_s++) ( * stonesoup_tainted_buff ) [ stonesoup_s - stonesoup_shm ] = * stonesoup_s; * stonesoup_tainted_buff = NULL; 