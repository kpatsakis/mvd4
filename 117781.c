void NetworkUtils::setInterfaceDns(CommandChain* CommandCallback NetworkResultOptions& aResult) char command [ MAX_COMMAND_SIZE ] ; int written ; if ( SDK_VERSION >= 20 )  written = snprintf ( command , sizeof command , "resolver setnetdns %d %s" , GET_FIELD ( mNetId ) , GET_CHAR ( mDomain ) ); written = snprintf ( command , sizeof command , "resolver setifdns %s %s" , GET_CHAR ( mIfname ) , GET_CHAR ( mDomain ) ); nsTArray < nsString > & dnses = GET_FIELD ( mDnses ) ; uint32_t length = dnses . Length ( ) ; for (uint32_t i = 0; i < length; i++) NS_ConvertUTF16toUTF8 autoDns ( dnses [ i ] ) ; int ret = snprintf ( command + written , sizeof ( command ) - written , " %s" , autoDns . get ( ) ) ; if ( ret <= 1 )  command [ written ] = '\0'; if ( ( ( size_t ) ret + written ) >= sizeof ( command ) )  command [ written ] = '\0'; written += ret; 