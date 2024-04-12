qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( profile -> color_space == GRAY_SIGNATURE )  profile -> grayTRC = read_tag_curveType ( src , index , TAG_kTRC ); static struct curveType *read_tag_curveType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; if ( tag )  uint32_t len ; return read_curveType ( src , tag -> offset , & len ) ; static struct curveType *read_curveType(struct mem_source *src, uint32_t offset, uint32_t *len) uint32_t type = read_u32 ( src , offset ) ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; 