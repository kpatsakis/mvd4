static void goodB2G() int count ; count = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); CWE400_Resource_Exhaustion__fgets_fwrite_82_base * baseObject = new CWE400_Resource_Exhaustion__fgets_fwrite_82_goodB2G baseObject -> action ( count ); void CWE400_Resource_Exhaustion__fgets_fwrite_82_goodB2G::action(int count) const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 