bool bindContinues(ParseNode* pn, const LabelVector* maybeLabels) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  return bindLabeledBreaksOrContinues ( maybeLabels , & labeledContinues_ , & createdJoinBlock , pn ) ; bool bindLabeledBreaksOrContinues(const LabelVector* maybeLabels, LabeledBlockMap* bool* createdJoinBlock, ParseNode* pn) if ( ! maybeLabels )  const LabelVector & labels = * maybeLabels ; for (unsigned i = 0; i < labels.length(); i++) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , createdJoinBlock , pn ) )  if ( ! mirGen_ -> ensureBallast ( ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  pred -> end ( MGoto :: New ( alloc ( ) , curBlock_ ) ); if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  if ( curBlock_ )  if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  