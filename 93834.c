 PIDL_dissect_policy_hnd(tvbuff_t *tvb, gint offset, packet_info proto_tree *tree, dcerpc_info* di, guint8 *drep, int guint32 param) offset = dissect_nt_hnd ( tvb , offset , pinfo , tree , di , drep , hfindex , & policy_hnd , NULL , param & PIDL_POLHND_OPEN , param & PIDL_POLHND_CLOSE , HND_TYPE_CTX_HANDLE ); static dissect_nt_hnd(tvbuff_t *tvb, gint offset, packet_info proto_tree *tree, dcerpc_info *di, guint8 *drep, int e_ctx_hnd *pdata, proto_item gboolean is_open, gboolean is_close, e_hnd_type type) e_ctx_hnd hnd ; char * name ; if ( di -> conformant_run )  switch ( type )  hnd . attributes = 0; if ( dcerpc_fetch_polhnd_data ( & hnd , & name , NULL , & open_frame , & close_frame , pinfo -> fd -> num ) )  gboolean dcerpc_fetch_polhnd_data(e_ctx_hnd char **name, guint32 guint32 *open_frame, guint32 guint32 cur_frame) pol_value * pol ; pol = find_pol_handle ( policy_hnd , cur_frame , & value ); static pol_value *find_pol_handle(e_ctx_hnd *policy_hnd, guint32 pol_hash_value **valuep) pol_hash_key key ; memcpy ( & key . policy_hnd , policy_hnd , sizeof ( key . policy_hnd ) ); if ( * valuep = ( pol_hash_value * ) g_hash_table_lookup ( pol_hash , & key ) )  for (pol = (*valuep)->list; pol != NULL; pol = pol->next) if ( pol -> first_frame <= frame && ( pol -> last_frame == 0 || pol -> last_frame >= frame ) )  return pol ; 