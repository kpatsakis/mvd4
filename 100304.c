void tile_swap_out(Tile *tile) tile_swap_command ( tile , SWAP_OUT ); static void tile_swap_command(Tile *tile,gint command) if ( gimp_swap_file -> fd == - 1 )  if ( gimp_swap_file -> fd == - 1 )  switch ( command )  tile_swap_default_out ( gimp_swap_file , tile ); static void tile_swap_default_out(SwapFile *swap_file,Tile *tile) gint bytes ; gint nleft ; gint64 offset ; gint64 newpos ; bytes = 64 * 64 * ( tile -> bpp ); if ( tile -> swap_offset == ( - 1 ) )  newpos = tile_swap_find_offset ( swap_file , bytes ); newpos = tile -> swap_offset; if ( swap_file -> cur_position != newpos )  offset = lseek ( swap_file -> fd , newpos , 0 ); if ( offset == ( - 1 ) )  swap_file -> cur_position = newpos; nleft = tile -> size; while ( nleft > 0 )  gint err = ( write ( swap_file -> fd , ( tile -> data + tile -> size - nleft ) , nleft ) ) ; if ( err <= 0 )  g_log ( "Gimp-Base" , G_LOG_LEVEL_MESSAGE , "unable to write tile data to disk: %s (%d/%d bytes written)" , g_strerror ( * __errno_location ( ) ) , err , nleft ); nleft -= err; 