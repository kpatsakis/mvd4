static int usb_xhci_post_load(void *opaque, int version_id) XHCIState * xhci = opaque ; PCIDevice * pci_dev = PCI_DEVICE ( xhci ) ; XHCISlot * slot ; dma_addr_t dcbaap , pctx ; uint32_t slot_ctx [ 4 ] ; uint32_t ep_ctx [ 5 ] ; int slotid , epid , state , intr ; dcbaap = xhci_addr64 ( xhci -> dcbaap_low , xhci -> dcbaap_high ); static inline dma_addr_t xhci_addr64(uint32_t low, uint32_t high) if ( sizeof ( dma_addr_t ) == 4 )  return low ; return low | ( ( ( dma_addr_t ) high << 16 ) << 16 ) ; for (slotid = 1; slotid <= xhci->numslots; slotid++) slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> addressed )  slot -> ctx = xhci_mask64 ( ldq_le_pci_dma ( pci_dev , dcbaap + 8 * slotid ) ); static inline dma_addr_t xhci_mask64(uint64_t addr) if ( sizeof ( dma_addr_t ) == 4 )  return addr & 0xffffffff ; return addr ; slot -> uport = xhci_lookup_uport ( xhci , slot_ctx ); static USBPort *xhci_lookup_uport(XHCIState *xhci, uint32_t *slot_ctx) USBPort * uport ; char path [ 32 ] ; int i , pos , port ; port = ( slot_ctx [ 1 ] >> 16 ) & 0xFF; if ( port < 1 || port > xhci -> numports )  return NULL ; if ( strcmp ( uport -> path , path ) == 0 )  return uport ; return NULL ; if ( ! slot -> uport )  slot -> enabled = 0; slot -> addressed = 0; for (epid = 1; epid <= 31; epid++) pctx = slot -> ctx + 32 * epid; xhci_dma_read_u32s ( xhci , pctx , ep_ctx , sizeof ( ep_ctx ) ); state = ep_ctx [ 0 ] & EP_STATE_MASK; if ( state == EP_DISABLED )  static inline void xhci_dma_read_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 