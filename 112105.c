gboolean dfilter_combo_add_recent(gchar *s) GtkWidget * filter_cm = ( g_object_get_data ( ( ( GObject * ) ( g_type_check_instance_cast ( ( ( GTypeInstance * ) top_level ) , ( ( GType ) ( 20 << 2 ) ) ) ) ) , "display_filter_combo" ) ) ; char * dup ; dup = g_strdup ( s ); return dfilter_combo_add ( filter_cm , dup ) ; static gboolean dfilter_combo_add(GtkWidget *filter_cm,char *s) int index ; if ( ! dfilter_entry_match ( filter_cm , s , & index ) )  static gboolean dfilter_entry_match(GtkWidget *filter_cm,char *s,int *index) GtkTreeModel * model = gtk_combo_box_get_model ( ( ( GtkComboBox * ) ( g_type_check_instance_cast ( ( ( GTypeInstance * ) filter_cm ) , gtk_combo_box_get_type ( ) ) ) ) ) ; GtkTreeIter iter ; const char * filter_str ; if ( ! gtk_tree_model_get_iter_first ( model , & iter ) )  filter_str = g_value_get_string ( ( & value ) ); if ( filter_str )  if ( strcmp ( s , filter_str ) == 0 )  while ( gtk_tree_model_iter_next ( model , & iter ) )  