CommandResult NetworkUtils::removeHostRouteLegacy(NetworkParams& aOptions) NS_ConvertUTF16toUTF8 autoHostname ( aOptions . mIp ) ; NS_ConvertUTF16toUTF8 autoGateway ( aOptions . mGateway ) ; int type , prefix ; type = getIpType ( autoHostname . get ( ) ); if ( type != AF_INET && type != AF_INET6 )  if ( type != getIpType ( autoGateway . get ( ) ) )  static int getIpType(const char *aIp) struct addrinfo hint , * ip_info = NULL ; memset ( & hint , 0 , sizeof ( hint ) ); hint . ai_family = AF_UNSPEC; hint . ai_flags = AI_NUMERICHOST; if ( getaddrinfo ( aIp , NULL , & hint , & ip_info ) )  