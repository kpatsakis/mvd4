static int xhci_submit(XHCIState *xhci, XHCITransfer *xfer, XHCIEPContext *epctx) xfer -> in_xfer = epctx -> type >> 2; switch ( epctx -> type )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = true; if ( xfer -> running_retry )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = false; xfer -> pkts = 1; xfer -> iso_xfer = true; xfer -> timed_xfer = true; if ( xfer -> running_retry )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( ! xfer -> running_async && ! xfer -> running_retry )  xhci_kick_ep ( xhci , xfer -> slotid , xfer -> epid , xfer -> streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  static int xhci_setup_packet(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; USBEndpoint * ep ; if ( xfer -> packet . ep )  ep = xhci_epid_to_usbep ( xhci , xfer -> slotid , xfer -> epid ); static USBEndpoint *xhci_epid_to_usbep(XHCIState unsigned int slotid, unsigned int epid) assert ( slotid >= 1 && slotid <= xhci -> numslots ); 