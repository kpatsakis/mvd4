static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  xhci_complete_packet ( xfer ); static int xhci_complete_packet(XHCITransfer *xfer) if ( xfer -> packet . status == USB_RET_ASYNC )  if ( xfer -> packet . status == USB_RET_NAK )  xfer -> running_async = 0; xfer -> running_retry = 0; xfer -> complete = 1; if ( xfer -> packet . status == USB_RET_SUCCESS )  xfer -> status = CC_SUCCESS; switch ( xfer -> packet . status )  xfer -> status = CC_USB_TRANSACTION_ERROR; xhci_xfer_report ( xfer ); static void xhci_xfer_report(XHCITransfer *xfer) uint32_t edtla = 0 ; unsigned int left ; bool reported = 0 ; bool shortpkt = 0 ; XHCIEvent event = { ER_TRANSFER , CC_SUCCESS } ; XHCIState * xhci = xfer -> xhci ; int i ; left = xfer -> packet . actual_length; for (i = 0; i < xfer->trb_count; i++) XHCITRB * trb = & xfer -> trbs [ i ] ; unsigned int chunk = 0 ; switch ( TRB_TYPE ( * trb ) )  chunk = trb -> status & 0x1ffff; if ( chunk > left )  chunk = left; if ( xfer -> status == CC_SUCCESS )  shortpkt = 1; left -= chunk; edtla += chunk; reported = 0; shortpkt = 0; if ( ( trb -> control & TRB_TR_IOC ) || ( ! reported && ( ( shortpkt && ( trb -> control & TRB_TR_ISP ) ) || ( xfer -> status != CC_SUCCESS && left == 0 ) ) ) )  event . slotid = xfer -> slotid; event . epid = xfer -> epid; event . length = ( trb -> status & 0x1ffff ) - chunk; event . flags = 0; event . ptr = trb -> addr; if ( xfer -> status == CC_SUCCESS )  event . ccode = shortpkt ? CC_SHORT_PACKET : CC_SUCCESS; event . ccode = xfer -> status; if ( TRB_TYPE ( * trb ) == TR_EVDATA )  event . ptr = trb -> parameter; event . flags |= TRB_EV_ED; event . length = edtla & 0xffffff; edtla = 0; xhci_event ( xhci , & event , TRB_INTR ( * trb ) ); reported = 1; if ( xfer -> status != CC_SUCCESS )  static void xhci_event(XHCIState *xhci, XHCIEvent *event, int v) XHCIInterrupter * intr ; dma_addr_t erdp ; unsigned int dp_idx ; if ( v >= xhci -> numintrs )  intr = & xhci -> intr [ v ]; if ( intr -> er_full )  erdp = xhci_addr64 ( intr -> erdp_low , intr -> erdp_high ); if ( erdp < intr -> er_start || erdp >= ( intr -> er_start + TRB_SIZE * intr -> er_size ) )  dp_idx = ( erdp - intr -> er_start ) / TRB_SIZE; assert ( dp_idx < intr -> er_size ); 