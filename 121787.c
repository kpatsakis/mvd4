void *stonesoup_print_data (void *data) struct stonesoup_data * ssD = ( struct stonesoup_data * ) data ; struct stonesoup_queue * ssQ = get_instance ( ssD -> file2 ) ; struct stonesoup_queue *get_instance (char* file2) static struct stonesoup_queue * ssQ = NULL ; if ( ssQ == NULL )  ssQ = ( struct stonesoup_queue * ) calloc ( 1 , sizeof ( struct stonesoup_queue ) ); ssQ -> size = 0; ssQ -> capacity = 30; ssQ -> head = NULL; ssQ -> tail = NULL; return ssQ ; int i ; while ( ( i = dequeue ( ssQ ) ) != - 1 )  int dequeue(struct stonesoup_queue *ssQ) if ( ssQ != NULL )  pthread_mutex_lock ( & ( ssQ -> lock ) ); 