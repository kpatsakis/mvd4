int CVE_2013_1707_VULN_NS_main(int argc, NS_tchar **argv) if ( argc < 3 )  if ( argc > 3 )  pid = _wtoi64 ( argv [ 3 ] ); if ( pid == - 1 )  if ( NS_tstrstr ( argv [ 3 ] , NS_T ( "/replace" ) ) )  sReplaceRequest = true; if ( sReplaceRequest )  NS_tchar installDir [ MAXPATHLEN ] ; if ( ! GetInstallationDir ( installDir ) )  fprintf ( stderr , "Could not get the installation directory\n" ); 