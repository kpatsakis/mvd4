void NetworkUtils::setInterfaceDns(CommandChain* CommandCallback NetworkResultOptions& aResult) char command [ MAX_COMMAND_SIZE ] ; int written ; if ( SDK_VERSION >= 20 )  written = snprintf ( command , sizeof command , "resolver setifdns %s %s" , GET_CHAR ( mIfname ) , GET_CHAR ( mDomain ) ); int ret = snprintf ( command + written , sizeof ( command ) - written , " %s" , autoDns . get ( ) ) ; if ( ret <= 1 )  command [ written ] = '\0'; if ( ( ( size_t ) ret + written ) >= sizeof ( command ) )  command [ written ] = '\0'; written += ret; 