static void goodB2G() FILE * data ; data = NULL; CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G * goodB2GObject = new CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G ( data ) ; CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G::CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G(FILE * dataCopy) data = dataCopy; data = fopen ( "BadSource_fopen.txt" , "w+" ); delete goodB2GObject CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G::~CWE404_Improper_Resource_Shutdown__fopen_w32_close_84_goodB2G() if ( data != NULL )  fclose ( data ); 