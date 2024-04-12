void hiddev_report_event(struct hid_device *hid, struct hid_report *report) struct hiddev_usage_ref uref ; memset ( & uref , 0 , sizeof ( uref ) ); uref . report_type = ( type == HID_INPUT_REPORT ) ? HID_REPORT_TYPE_INPUT : ( ( type == HID_OUTPUT_REPORT ) ? HID_REPORT_TYPE_OUTPUT : ( ( type == HID_FEATURE_REPORT ) ? HID_REPORT_TYPE_FEATURE : 0 ) ); uref . report_id = report -> id; uref . field_index = HID_FIELD_INDEX_NONE; hiddev_send_event ( hid , & uref ); static void hiddev_send_event(struct hid_device struct hiddev_usage_ref *uref) struct hiddev * hiddev = hid -> hiddev ; spin_lock_irqsave ( & hiddev -> list_lock , flags ); if ( uref -> field_index != HID_FIELD_INDEX_NONE || ( list -> flags & HIDDEV_FLAG_REPORT ) != 0 )  list -> buffer [ list -> head ] = * uref; list -> head = ( list -> head + 1 ) & ( HIDDEV_BUFFER_SIZE - 1 ); kill_fasync ( & list -> fasync , SIGIO , POLL_IN ); spin_unlock_irqrestore ( & hiddev -> list_lock , flags ); wake_up_interruptible ( & hiddev -> wait ); 