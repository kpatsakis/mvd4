static gboolean CVE_2014_4174_VULN_libpcap_dump(wtap_dumper const struct wtap_pkthdr const guint8 *pd, int *err) const union wtap_pseudo_header * pseudo_header = & phdr -> pseudo_header ; struct pcaprec_ss990915_hdr rec_hdr ; int phdrsize ; phdrsize = pcap_get_phdr_size ( wdh -> encap , pseudo_header ); rec_hdr . hdr . ts_sec = ( guint32 ) phdr -> ts . secs; if ( wdh -> tsprecision == WTAP_FILE_TSPREC_NSEC )  rec_hdr . hdr . ts_usec = phdr -> ts . nsecs; rec_hdr . hdr . ts_usec = phdr -> ts . nsecs / 1000; rec_hdr . hdr . incl_len = phdr -> caplen + phdrsize; rec_hdr . hdr . orig_len = phdr -> len + phdrsize; if ( rec_hdr . hdr . incl_len > WTAP_MAX_PACKET_SIZE || rec_hdr . hdr . orig_len > WTAP_MAX_PACKET_SIZE )  switch ( wdh -> file_type )  rec_hdr . ifindex = 0; rec_hdr . protocol = 0; rec_hdr . pkt_type = 0; rec_hdr . ifindex = 0; rec_hdr . protocol = 0; rec_hdr . pkt_type = 0; rec_hdr . cpu1 = 0; rec_hdr . cpu2 = 0; memcpy ( & rec_hdr . ifindex , pseudo_header -> nokia . stuff , 4 ); rec_hdr . protocol = 0; rec_hdr . pkt_type = 0; rec_hdr . cpu1 = 0; rec_hdr . cpu2 = 0; if ( ! wtap_dump_file_write ( wdh , & rec_hdr , hdr_size , err ) )  