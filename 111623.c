void CWE415_Double_Free__malloc_free_wchar_t_54_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); free ( data ); CWE415_Double_Free__malloc_free_wchar_t_54b_badSink ( data ); void CWE415_Double_Free__malloc_free_wchar_t_54b_badSink(wchar_t * data) CWE415_Double_Free__malloc_free_wchar_t_54c_badSink ( data ); void CWE415_Double_Free__malloc_free_wchar_t_54c_badSink(wchar_t * data) CWE415_Double_Free__malloc_free_wchar_t_54d_badSink ( data ); void CWE415_Double_Free__malloc_free_wchar_t_54d_badSink(wchar_t * data) CWE415_Double_Free__malloc_free_wchar_t_54e_badSink ( data ); void CWE415_Double_Free__malloc_free_wchar_t_54e_badSink(wchar_t * data) free ( data ); 