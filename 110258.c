static void CVE_2009_2484_VULN_Win32AddConnection( access_t *p_access, char char *psz_user, char char *psz_domain ) NETRESOURCE net_resource ; HINSTANCE hdll = LoadLibrary ( _T ( "MPR.DLL" ) ) ; if ( ! hdll )  OurWNetAddConnection2 = ( void * ) GetProcAddress ( hdll , _T ( "WNetAddConnection2A" ) ); if ( ! OurWNetAddConnection2 )  memset ( & net_resource , 0 , sizeof ( net_resource ) ); net_resource . dwType = RESOURCETYPE_DISK; net_resource . lpRemoteName = psz_remote; i_result = OurWNetAddConnection2 ( & net_resource , psz_pwd , psz_user , 0 ); if ( i_result != NO_ERROR )  if ( i_result != ERROR_ALREADY_ASSIGNED && i_result != ERROR_DEVICE_ALREADY_REMEMBERED )  