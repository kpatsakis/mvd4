void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) size_t * nlastpos ; size_t * o_nlast ; d -> searchflag = searchflag; nlastpos = ( ( sizeof ( ( * nlastpos ) ) == 1 ? xmalloc ( d -> depth ) : xnmalloc ( d -> depth , sizeof ( ( * nlastpos ) ) ) ) ); while ( 0 )  o_nlast = nlastpos; free ( o_nlast ); 