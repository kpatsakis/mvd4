void *stonesoup_replace (void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; int * qsort_arr ; qsort_arr = malloc ( sizeof ( int ) * stonesoupData -> qsize ); if ( qsort_arr != NULL )  qsort_arr [ i ] = stonesoupData -> qsize - i; qsort ( qsort_arr , stonesoupData -> qsize , sizeof ( int ) , & stonesoup_comp ); free ( qsort_arr ); while ( stonesoupData -> data [ i ] != '\0' )  if ( stonesoupData -> data [ i ] == '_' )  stonesoupData -> data [ i ] = '-'; i ++; 