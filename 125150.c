void NetworkUtils::postTetherInterfaceList(CommandChain* CommandCallback NetworkResultOptions& aResult) char buf [ BUF_SIZE ] ; NS_ConvertUTF16toUTF8 reason ( aResult . mResultReason ) ; memcpy ( buf , reason . get ( ) , reason . Length ( ) + 1 ); split ( buf , INTERFACE_DELIMIT , GET_FIELD ( mInterfaceList ) ); static void split(char* str, const char* sep, nsTArray<nsCString>& result) char * s = strtok ( str , sep ) ; while ( s != nullptr )  result . AppendElement ( s ); s = strtok ( nullptr , sep ); 