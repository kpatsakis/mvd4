static void xhci_child_detach(USBPort *uport, USBDevice *child) USBBus * bus = usb_bus_from_device ( child ) ; XHCIState * xhci = container_of ( bus , XHCIState , bus ) ; xhci_detach_slot ( xhci , child -> port ); static void xhci_detach_slot(XHCIState *xhci, USBPort *uport) int slot , ep ; for (slot = 0; slot < xhci->numslots; slot++) if ( xhci -> slots [ slot ] . uport == uport )  if ( slot == xhci -> numslots )  for (ep = 0; ep < 31; ep++) if ( xhci -> slots [ slot ] . eps [ ep ] )  xhci_ep_nuke_xfers ( xhci , slot + 1 , ep + 1 , 0 ); static int xhci_ep_nuke_xfers(XHCIState *xhci, unsigned int unsigned int epid, TRBCCode report) XHCISlot * slot ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  ep = xhci_epid_to_usbep ( xhci , slotid , epid ); static USBEndpoint *xhci_epid_to_usbep(XHCIState unsigned int slotid, unsigned int epid) assert ( slotid >= 1 && slotid <= xhci -> numslots ); 