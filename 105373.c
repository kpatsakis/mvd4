static void core_begin(MemoryListener *listener) uint16_t n ; n = dummy_section ( & io_mem_unassigned ); static uint16_t dummy_section(MemoryRegion *mr) MemoryRegionSection section . mr = mr . offset_within_address_space = 0 . offset_within_region = 0 . size = int128_2_64 ( ) , return phys_section_add ( & section ) ; static uint16_t phys_section_add(MemoryRegionSection *section) if ( next_map . sections_nb == next_map . sections_nb_alloc )  next_map . sections_nb_alloc = MAX ( next_map . sections_nb_alloc * 2 , 16 ); next_map . sections = g_renew ( MemoryRegionSection , next_map . sections , next_map . sections_nb_alloc ); next_map . sections [ next_map . sections_nb ] = * section; return next_map . sections_nb ++ ; assert ( n == PHYS_SECTION_UNASSIGNED ); 