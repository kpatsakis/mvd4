int main(int argc, char *argv[]) unsigned i ; if ( fork ( ) )  for (i=0;i<3;++i) pid = fork ( ); if ( pid == 0 )  pid = getpid ( ); handler ( pid ); void handler(int curPid) int fd ; struct stat fileStat ; if ( ( fd = open ( fName , O_WRONLY | O_CREAT | O_EXCL ) ) != - 1 )  if ( fstat ( fd , & fileStat ) == 0 )  if ( fileStat . st_size > 2048 )  char output [ BUFSIZ ] ; sprintf ( output , "(%d) %s" , curPid , string ); if ( write ( fd , output , strlen ( output ) * sizeof * output ) < strlen ( output ) * sizeof * output )  