static int CVE_2011_2987_VULN_GrowAtomTable(AtomTable *atable, int size) int * newmap , * newrev ; if ( atable -> size < size )  if ( atable -> amap )  newmap = malloc ( sizeof ( int ) * size ); if ( ! newmap || ! newrev )  if ( newmap )  atable -> amap = newmap; atable -> amap = newrev; memset ( & newmap [ atable -> size ] , 0 , ( size - atable -> size ) * sizeof ( int ) ); atable -> amap = newmap; atable -> arev = newrev; atable -> size = size; 