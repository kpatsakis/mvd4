void CWE415_Double_Free__malloc_free_long_53_bad() long * data ; data = NULL; data = ( long * ) malloc ( 100 * sizeof ( long ) ); CWE415_Double_Free__malloc_free_long_53b_badSink ( data ); void CWE415_Double_Free__malloc_free_long_53b_badSink(long * data) CWE415_Double_Free__malloc_free_long_53c_badSink ( data ); void CWE415_Double_Free__malloc_free_long_53c_badSink(long * data) CWE415_Double_Free__malloc_free_long_53d_badSink ( data ); void CWE415_Double_Free__malloc_free_long_53d_badSink(long * data) free ( data ); 