static CharDriverState *qemu_chr_open_win(const char *filename) CharDriverState * chr ; WinCharState * s ; chr = qemu_mallocz ( sizeof ( CharDriverState ) ); s = qemu_mallocz ( sizeof ( WinCharState ) ); chr -> opaque = s; chr -> chr_write = win_chr_write; chr -> chr_close = win_chr_close; if ( win_chr_init ( chr , filename ) < 0 )  static int win_chr_init(CharDriverState *chr, const char *filename) WinCharState * s = chr -> opaque ; s -> hsend = CreateEvent ( NULL , TRUE , FALSE , NULL ); if ( ! s -> hsend )  fprintf ( stderr , "Failed CreateEvent\n" ); 