static pvscsi_command_complete(SCSIRequest *req, uint32_t status, size_t resid) PVSCSIRequest * pvscsi_req = req -> hba_private ; PVSCSIState * s ; if ( ! pvscsi_req )  s = pvscsi_req -> dev; if ( resid )  pvscsi_req -> cmp . hostStatus = BTSTAT_DATARUN; pvscsi_req -> cmp . scsiStatus = status; pvscsi_complete_request ( s , pvscsi_req ); static pvscsi_complete_request(PVSCSIState *s, PVSCSIRequest *r) assert ( ! r -> completed ); 