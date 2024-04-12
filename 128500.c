static void usb_xhci_realize(struct PCIDevice *dev, Error **errp) int i , ret ; XHCIState * xhci = XHCI ( dev ) ; dev -> config [ PCI_CLASS_PROG ] = 0x30; dev -> config [ PCI_INTERRUPT_PIN ] = 0x01; dev -> config [ PCI_CACHE_LINE_SIZE ] = 0x10; dev -> config [ 0x60 ] = 0x30; if ( xhci -> numintrs > MAXINTRS )  xhci -> numintrs = MAXINTRS; while ( xhci -> numintrs & ( xhci -> numintrs - 1 ) )  xhci -> numintrs ++; if ( xhci -> numintrs < 1 )  xhci -> numintrs = 1; if ( xhci -> numslots > MAXSLOTS )  xhci -> numslots = MAXSLOTS; if ( xhci -> numslots < 1 )  xhci -> numslots = 1; if ( xhci_get_flag ( xhci , XHCI_FLAG_ENABLE_STREAMS ) )  static bool xhci_get_flag(XHCIState *xhci, enum xhci_flags bit) return xhci -> flags & ( 1 << bit ) ; xhci -> max_pstreams_mask = 0; xhci -> mfwrap_timer = timer_new_ns ( QEMU_CLOCK_VIRTUAL , xhci_mfwrap_timer , xhci ); if ( pci_bus_is_express ( dev -> bus ) || xhci_get_flag ( xhci , XHCI_FLAG_FORCE_PCIE_ENDCAP ) )  static bool xhci_get_flag(XHCIState *xhci, enum xhci_flags bit) return xhci -> flags & ( 1 << bit ) ; ret = pcie_endpoint_cap_init ( dev , 0xa0 ); assert ( ret >= 0 ); 