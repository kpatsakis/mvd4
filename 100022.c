void CWE506_Embedded_Malicious_Code__w32_base64_encoded_payload_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; char * encodedPayload = "Y2FsYy5leGU=" ; DWORD requiredLength ; if ( ! CryptStringToBinaryA ( encodedPayload , strlen ( encodedPayload ) , CRYPT_STRING_BASE64 , NULL , & requiredLength , NULL , NULL ) )  decodedPayload = ( BYTE * ) malloc ( requiredLength + 1 ); if ( decodedPayload == NULL )  if ( ! CryptStringToBinaryA ( encodedPayload , strlen ( encodedPayload ) , CRYPT_STRING_BASE64 , decodedPayload , & requiredLength , NULL , NULL ) )  decodedPayload [ requiredLength ] = '\0'; if ( system ( ( char * ) decodedPayload ) <= 0 )  while ( 0 )  