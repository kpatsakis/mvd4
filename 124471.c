static TRBCCode xhci_reset_slot(XHCIState *xhci, unsigned int slotid) int i ; for (i = 2; i <= 31; i++) if ( xhci -> slots [ slotid - 1 ] . eps [ i - 1 ] )  xhci_disable_ep ( xhci , slotid , i ); static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; XHCIEPContext * epctx ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  epctx = slot -> eps [ epid - 1 ]; xhci_set_ep_state ( xhci , epctx , NULL , EP_DISABLED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) uint32_t ctx [ 5 ] ; xhci_dma_read_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_read_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 