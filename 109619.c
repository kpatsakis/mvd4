static void xhci_complete(USBPort *port, USBPacket *packet) XHCITransfer * xfer = container_of ( packet , XHCITransfer , packet ) ; if ( packet -> status == USB_RET_REMOVE_FROM_QUEUE )  xhci_kick_ep ( xfer -> xhci , xfer -> slotid , xfer -> epid , xfer -> streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  xhci_set_ep_state ( xhci , epctx , NULL , EP_RUNNING ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) XHCIRing * ring = NULL ; uint32_t ctx [ 5 ] ; ctx [ 0 ] &= ~EP_STATE_MASK; ctx [ 0 ] |= state; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ring = & sctx -> ring; ring = & epctx -> ring; if ( ring )  ctx [ 2 ] = ring -> dequeue | ring -> ccs; ctx [ 3 ] = ( ring -> dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 