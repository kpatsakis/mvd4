void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) size_t * nfirstpos ; size_t * o_nfirst ; d -> searchflag = searchflag; nfirstpos = ( ( sizeof ( ( * nfirstpos ) ) == 1 ? xmalloc ( d -> depth ) : xnmalloc ( d -> depth , sizeof ( ( * nfirstpos ) ) ) ) ); while ( 0 )  o_nfirst = nfirstpos; free ( o_nfirst ); 