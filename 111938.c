qcms_bool compute_precache(struct curveType *trc, uint8_t *output) if ( trc -> type == PARAMETRIC_CURVE_TYPE )  float gamma_table [ 256 ] ; uint16_t gamma_table_uint [ 256 ] ; uint16_t i ; uint16_t * inverted ; int inverted_size = 256 ; for(i = 0; i < 256; i++) gamma_table_uint [ i ] = ( uint16_t ) ( gamma_table [ i ] * 65535 ); if ( inverted_size < 256 )  inverted_size = 256; inverted = invert_lut ( gamma_table_uint , 256 , inverted_size ); static uint16_t *invert_lut(uint16_t *table, int length, int out_length) uint16_t * output = malloc ( sizeof ( uint16_t ) * out_length ) ; if ( ! output )  output [ i ] = lut_inverse_interp16 ( input , table , length ); uint16_fract_t lut_inverse_interp16(uint16_t Value, uint16_t LutTable[], int length) while ( LutTable [ NumZeroes ] == 0 && NumZeroes < length - 1 )  if ( NumZeroes == 0 && Value == 0 )  while ( LutTable [ length - 1 - NumPoles ] == 0xFFFF && NumPoles < length - 1 )  if ( Value == 0 )  a = ( ( NumZeroes - 1 ) * 0xFFFF ) / ( length - 1 ); b = ( ( length - 1 - NumPoles ) * 0xFFFF ) / ( length - 1 ); l = a - 1; r = b + 1; while ( r > l )  x = ( l + r ) / 2; res = ( int ) lut_interp_linear16 ( ( uint16_fract_t ) ( x - 1 ) , LutTable , length ); uint16_t lut_interp_linear16(uint16_t input_value, uint16_t *table, int length) uint32_t value = ( input_value * ( length - 1 ) ) ; uint32_t upper = ( value + 65534 ) / 65535 ; uint32_t lower = value / 65535 ; uint32_t interp = value % 65535 ; value = ( table [ upper ] * ( interp ) + table [ lower ] * ( 65535 - interp ) ) / 65535; return value ; if ( res == Value )  return ( uint16_fract_t ) ( x - 1 ) ; if ( res > Value )  r = x - 1; l = x + 1; val2 = ( length - 1 ) * ( ( double ) ( x - 1 ) / 65535.0 ); cell0 = ( int ) floor ( val2 ); cell1 = ( int ) ceil ( val2 ); if ( cell0 == cell1 )  return ( uint16_fract_t ) x ; y0 = LutTable [ cell0 ]; x0 = ( 65535.0 * cell0 ) / ( length - 1 ); y1 = LutTable [ cell1 ]; x1 = ( 65535.0 * cell1 ) / ( length - 1 ); a = ( y1 - y0 ) / ( x1 - x0 ); b = y0 - a * x0; if ( fabs ( a ) < 0.01 )  return ( uint16_fract_t ) x ; f = ( ( Value - b ) / a ); if ( f < 0.0 )  if ( f >= 65535.0 )  return ( uint16_fract_t ) floor ( f + 0.5 ) ; return output ; 