qcms_profile* qcms_profile_from_path(const char *path) FILE * file = fopen ( path , "rb" ) ; if ( file )  profile = qcms_profile_from_file ( file ); qcms_profile* qcms_profile_from_file(FILE *file) size_t length ; void * data ; qcms_data_from_file ( file , & data , & length ); static void qcms_data_from_file(FILE *file, void **mem, size_t *size) uint32_t length , remaining_length ; be32 length_be ; void * data ; if ( fread ( & length_be , 1 , sizeof ( length_be ) , file ) != sizeof ( length_be ) )  length = be32_to_cpu ( length_be ); if ( length > MAX_PROFILE_SIZE || length < sizeof ( length_be ) )  data = malloc ( length ); if ( ! data )  * ( ( be32 * ) data ) = length_be; read_length = fread ( ( unsigned char * ) data + sizeof ( length_be ) , 1 , remaining_length , file ); if ( read_length != remaining_length )  free ( data ); * mem = data; 