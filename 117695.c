static void xhci_doorbell_write(void *ptr, hwaddr uint64_t val, unsigned size) XHCIState * xhci = ptr ; unsigned int epid , streamid ; if ( ! xhci_running ( xhci ) )  static inline int xhci_running(XHCIState *xhci) return ! ( xhci -> usbsts & USBSTS_HCH ) && ! xhci -> intr [ 0 ] . er_full ; reg >>= 2; if ( reg == 0 )  epid = val & 0xff; streamid = ( val >> 16 ) & 0xffff; if ( reg > xhci -> numslots )  if ( epid > 31 )  xhci_kick_ep ( xhci , reg , epid , streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) assert ( epid >= 1 && epid <= 31 ); 