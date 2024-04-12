static int xhci_fire_transfer(XHCIState *xhci, XHCITransfer *xfer, XHCIEPContext *epctx) return xhci_submit ( xhci , xfer , epctx ) ; static int xhci_submit(XHCIState *xhci, XHCITransfer *xfer, XHCIEPContext *epctx) xfer -> in_xfer = epctx -> type >> 2; switch ( epctx -> type )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = true; if ( xfer -> running_retry )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = false; xfer -> pkts = 1; xfer -> iso_xfer = true; xfer -> timed_xfer = true; if ( xfer -> running_retry )  if ( xhci_setup_packet ( xfer ) < 0 )  static int xhci_setup_packet(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; USBEndpoint * ep ; if ( xfer -> packet . ep )  ep = xhci_epid_to_usbep ( xhci , xfer -> slotid , xfer -> epid ); static USBEndpoint *xhci_epid_to_usbep(XHCIState unsigned int slotid, unsigned int epid) assert ( slotid >= 1 && slotid <= xhci -> numslots ); 