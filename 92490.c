void CWE506_Embedded_Malicious_Code__w32_screen_capture_07_bad() if ( staticFive == 5 )  BITMAP bmpScreen ; RECT rcClient ; BITMAPFILEHEADER bmfHeader ; BITMAPINFOHEADER bmiHeader ; DWORD dwBmpSize ; DWORD dwSizeofDIB ; DWORD dwBytesWritten ; HWND hWnd = GetDesktopWindow ( ) ; hdcWindow = GetDC ( hWnd ); if ( hdcWindow == NULL )  hdcMemDC = CreateCompatibleDC ( hdcWindow ); if ( hdcMemDC == NULL )  if ( GetClientRect ( hWnd , & rcClient ) == 0 )  hbmScreen = CreateCompatibleBitmap ( hdcWindow , rcClient . right - rcClient . left , rcClient . bottom - rcClient . top ); if ( hbmScreen == NULL )  selectResult = SelectObject ( hdcMemDC , hbmScreen ); if ( selectResult == NULL || selectResult == HGDI_ERROR )  if ( BitBlt ( hdcMemDC , 0 , 0 , rcClient . right - rcClient . left , rcClient . bottom - rcClient . top , hdcWindow , 0 , 0 , SRCCOPY ) == 0 )  if ( GetObject ( hbmScreen , sizeof ( BITMAP ) , & bmpScreen ) == 0 )  bmiHeader . biSize = sizeof ( BITMAPINFOHEADER ); bmiHeader . biWidth = bmpScreen . bmWidth; bmiHeader . biHeight = bmpScreen . bmHeight; bmiHeader . biPlanes = 1; bmiHeader . biBitCount = 32; bmiHeader . biCompression = BI_RGB; bmiHeader . biSizeImage = 0; bmiHeader . biXPelsPerMeter = 0; bmiHeader . biYPelsPerMeter = 0; bmiHeader . biClrUsed = 0; bmiHeader . biClrImportant = 0; dwBmpSize = ( ( bmpScreen . bmWidth * bmiHeader . biBitCount + 31 ) / 32 ) * 4 * bmpScreen . bmHeight; hDIB = GlobalAlloc ( GHND , dwBmpSize ); if ( hDIB == NULL )  lpbitmap = ( char * ) GlobalLock ( hDIB ); if ( lpbitmap == NULL )  if ( GetDIBits ( hdcWindow , hbmScreen , 0 , ( UINT ) bmpScreen . bmHeight , lpbitmap , ( BITMAPINFO * ) & bmiHeader , DIB_RGB_COLORS ) == 0 )  hFile = CreateFile ( TEXT ( "capture.bmp" ) , GENERIC_WRITE , 0 , NULL , CREATE_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile == INVALID_HANDLE_VALUE )  dwSizeofDIB = dwBmpSize + sizeof ( BITMAPFILEHEADER ) + sizeof ( BITMAPINFOHEADER ); bmfHeader . bfOffBits = ( DWORD ) sizeof ( BITMAPFILEHEADER ) + ( DWORD ) sizeof ( BITMAPINFOHEADER ); bmfHeader . bfSize = dwSizeofDIB; bmfHeader . bfType = 0x4D42; dwBytesWritten = 0; if ( WriteFile ( hFile , ( LPSTR ) & bmfHeader , sizeof ( BITMAPFILEHEADER ) , & dwBytesWritten , NULL ) == 0 )  if ( WriteFile ( hFile , ( LPSTR ) & bmiHeader , sizeof ( BITMAPINFOHEADER ) , & dwBytesWritten , NULL ) == 0 )  if ( WriteFile ( hFile , ( LPSTR ) lpbitmap , dwBmpSize , & dwBytesWritten , NULL ) == 0 )  while ( 0 )  if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 