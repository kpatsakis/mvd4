struct key *find_keyring_by_name(const char *name, bool skip_perm_check) struct key * keyring ; int bucket ; if ( ! name )  bucket = keyring_hash ( name ); static inline unsigned keyring_hash(const char *desc) unsigned bucket = 0 ; for (; *desc; desc++) bucket += ( unsigned char ) * desc; return bucket & ( KEYRING_NAME_HASH_SIZE - 1 ) ; if ( keyring_name_hash [ bucket ] . next )  if ( strcmp ( keyring -> description , name ) != 0 )  