qcms_profile* qcms_profile_from_file(FILE *file) size_t length ; qcms_profile * profile ; void * data ; if ( ( data == NULL ) || ( length == 0 ) )  profile = qcms_profile_from_memory ( data , length ); qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( find_tag ( index , TAG_A2B0 ) )  static struct tag *find_tag(struct tag_index index, uint32_t tag_id) unsigned int i ; struct tag * tag = NULL ; for (i = 0; i < index.count; i++) if ( index . tags [ i ] . signature == tag_id )  return & index . tags [ i ] ; return tag ; if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT16_TYPE )  static struct tag *find_tag(struct tag_index index, uint32_t tag_id) unsigned int i ; struct tag * tag = NULL ; if ( index . tags [ i ] . signature == tag_id )  return & index . tags [ i ] ; return tag ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  return 0 ; be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; static struct tag *find_tag(struct tag_index index, uint32_t tag_id) unsigned int i ; struct tag * tag = NULL ; if ( index . tags [ i ] . signature == tag_id )  return & index . tags [ i ] ; return tag ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  return 0 ; be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT_MAB_TYPE )  static struct tag *find_tag(struct tag_index index, uint32_t tag_id) unsigned int i ; struct tag * tag = NULL ; if ( index . tags [ i ] . signature == tag_id )  return & index . tags [ i ] ; return tag ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  return 0 ; be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; profile -> mAB = read_tag_lutmABType ( src , index , TAG_A2B0 ); static struct lutmABType *read_tag_lutmABType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; uint32_t offset = tag -> offset ; uint32_t matrix_offset ; uint32_t clut_offset ; uint32_t clut_size = 1 ; uint8_t clut_precision ; uint32_t type = read_u32 ( src , offset ) ; uint8_t num_in_channels , num_out_channels ; struct lutmABType * lut ; uint32_t i ; if ( type != LUT_MAB_TYPE && type != LUT_MBA_TYPE )  num_in_channels = read_u8 ( src , offset + 8 ); num_out_channels = read_u8 ( src , offset + 8 ); if ( num_in_channels > MAX_CHANNELS || num_out_channels > MAX_CHANNELS )  if ( num_in_channels != 3 || num_out_channels != 3 )  clut_offset = read_u32 ( src , offset + 24 ); matrix_offset = read_u32 ( src , offset + 16 ); if ( clut_offset )  clut_offset += offset; if ( matrix_offset )  matrix_offset += offset; if ( clut_offset )  for (i = 0; i < num_in_channels; i++) clut_size *= read_u8 ( src , clut_offset + i ); clut_size = 0; clut_size = clut_size * num_out_channels; if ( clut_size > MAX_CLUT_SIZE )  lut = malloc ( sizeof ( struct lutmABType ) + ( clut_size ) * sizeof ( float ) ); if ( ! lut )  memset ( lut , 0 , sizeof ( struct lutmABType ) ); lut -> clut_table = & lut -> clut_table_data [ 0 ]; for (i = 0; i < num_in_channels; i++) lut -> num_grid_points [ i ] = read_u8 ( src , clut_offset + i ); lut -> reversed = ( type == LUT_MBA_TYPE ); lut -> num_in_channels = num_in_channels; lut -> num_out_channels = num_out_channels; if ( matrix_offset )  lut -> e00 = read_s15Fixed16Number ( src , matrix_offset + 4 * 0 ); lut -> e01 = read_s15Fixed16Number ( src , matrix_offset + 4 * 1 ); lut -> e02 = read_s15Fixed16Number ( src , matrix_offset + 4 * 2 ); lut -> e10 = read_s15Fixed16Number ( src , matrix_offset + 4 * 3 ); lut -> e11 = read_s15Fixed16Number ( src , matrix_offset + 4 * 4 ); lut -> e12 = read_s15Fixed16Number ( src , matrix_offset + 4 * 5 ); lut -> e20 = read_s15Fixed16Number ( src , matrix_offset + 4 * 6 ); lut -> e21 = read_s15Fixed16Number ( src , matrix_offset + 4 * 7 ); lut -> e22 = read_s15Fixed16Number ( src , matrix_offset + 4 * 8 ); lut -> e03 = read_s15Fixed16Number ( src , matrix_offset + 4 * 9 ); lut -> e13 = read_s15Fixed16Number ( src , matrix_offset + 4 * 10 ); lut -> e23 = read_s15Fixed16Number ( src , matrix_offset + 4 * 11 ); if ( clut_offset )  clut_precision = read_u8 ( src , clut_offset + 16 ); if ( clut_precision == 1 )  if ( clut_precision == 2 )  for (i = 0; i < clut_size; i++) lut -> clut_table [ i ] = uInt16Number_to_float ( read_uInt16Number ( src , clut_offset + 20 + i * 2 ) ); if ( ! src -> valid )  mAB_release ( lut ); static void mAB_release(struct lutmABType *lut) uint8_t i ; for (i = 0; i < lut->num_in_channels; i++) for (i = 0; i < lut->num_out_channels; i++) free ( lut -> m_curves [ i ] ); 