void CWE690_NULL_Deref_From_Return__fopen_53_bad() FILE * data ; data = fopen ( "file.txt" , "w+" ); CWE690_NULL_Deref_From_Return__fopen_53b_badSink ( data ); void CWE690_NULL_Deref_From_Return__fopen_53b_badSink(FILE * data) CWE690_NULL_Deref_From_Return__fopen_53c_badSink ( data ); void CWE690_NULL_Deref_From_Return__fopen_53c_badSink(FILE * data) CWE690_NULL_Deref_From_Return__fopen_53d_badSink ( data ); void CWE690_NULL_Deref_From_Return__fopen_53d_badSink(FILE * data) fclose ( data ); 