static int xhci_complete_packet(XHCITransfer *xfer) if ( xfer -> packet . status == USB_RET_ASYNC )  if ( xfer -> packet . status == USB_RET_NAK )  xfer -> running_async = 0; xfer -> running_retry = 0; xfer -> complete = 1; if ( xfer -> packet . status == USB_RET_SUCCESS )  xfer -> status = CC_SUCCESS; switch ( xfer -> packet . status )  xfer -> status = CC_STALL_ERROR; xfer -> status = CC_BABBLE_DETECTED; xhci_stall_ep ( xfer ); static void xhci_stall_ep(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; XHCISlot * slot = & xhci -> slots [ xfer -> slotid - 1 ] ; XHCIEPContext * epctx = slot -> eps [ xfer -> epid - 1 ] ; if ( epctx -> nr_pstreams )  epctx -> ring . dequeue = xfer -> trbs [ 0 ] . addr; epctx -> ring . ccs = xfer -> trbs [ 0 ] . ccs; xhci_set_ep_state ( xhci , epctx , NULL , EP_HALTED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) XHCIRing * ring = NULL ; uint32_t ctx [ 5 ] ; ctx [ 0 ] &= ~EP_STATE_MASK; ctx [ 0 ] |= state; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ring = & sctx -> ring; ring = & epctx -> ring; if ( ring )  ctx [ 2 ] = ring -> dequeue | ring -> ccs; ctx [ 3 ] = ( ring -> dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 