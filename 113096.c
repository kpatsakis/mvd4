static __be32 *CVE_2010_2521_VULN_read_buf(struct nfsd4_compoundargs *argp, u32 nbytes) unsigned int avail = ( char * ) argp -> end - ( char * ) argp -> p ; __be32 * p ; if ( avail + argp -> pagelen < nbytes )  if ( avail + PAGE_SIZE < nbytes )  if ( nbytes <= sizeof ( argp -> tmp ) )  p = argp -> tmp; p = argp -> tmpp = kmalloc ( nbytes , GFP_KERNEL ); if ( ! p )  memcpy ( p , argp -> p , avail ); argp -> p = page_address ( argp -> pagelist [ 0 ] ); argp -> pagelist ++; if ( argp -> pagelen < PAGE_SIZE )  argp -> end = p + ( argp -> pagelen >> 2 ); argp -> pagelen = 0; argp -> end = p + ( PAGE_SIZE >> 2 ); argp -> pagelen -= PAGE_SIZE; memcpy ( ( ( char * ) p ) + avail , argp -> p , ( nbytes - avail ) ); 