static void xhci_doorbell_write(void *ptr, hwaddr uint64_t val, unsigned size) XHCIState * xhci = ptr ; unsigned int epid , streamid ; if ( ! xhci_running ( xhci ) )  static inline int xhci_running(XHCIState *xhci) return ! ( xhci -> usbsts & USBSTS_HCH ) && ! xhci -> intr [ 0 ] . er_full ; reg >>= 2; if ( reg == 0 )  epid = val & 0xff; streamid = ( val >> 16 ) & 0xffff; if ( reg > xhci -> numslots )  if ( epid > 31 )  xhci_kick_ep ( xhci , reg , epid , streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  assert ( xfer -> packet . status != USB_RET_NAK ); 