qcms_profile* qcms_profile_from_file(FILE *file) size_t length ; qcms_profile * profile ; void * data ; if ( ( data == NULL ) || ( length == 0 ) )  profile = qcms_profile_from_memory ( data , length ); qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( find_tag ( index , TAG_B2A0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT16_TYPE )  if ( read_u32 ( src , find_tag ( index , TAG_B2A0 ) -> offset ) == LUT_MBA_TYPE )  profile -> mBA = read_tag_lutmABType ( src , index , TAG_B2A0 ); static struct lutmABType *read_tag_lutmABType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; uint32_t offset = tag -> offset ; uint32_t a_curve_offset , b_curve_offset , m_curve_offset ; uint32_t type = read_u32 ( src , offset ) ; uint8_t num_in_channels , num_out_channels ; if ( type != LUT_MAB_TYPE && type != LUT_MBA_TYPE )  num_in_channels = read_u8 ( src , offset + 8 ); num_out_channels = read_u8 ( src , offset + 8 ); if ( num_in_channels > MAX_CHANNELS || num_out_channels > MAX_CHANNELS )  if ( num_in_channels != 3 || num_out_channels != 3 )  m_curve_offset = read_u32 ( src , offset + 20 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; 