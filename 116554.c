static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  nsIFrame * outOfFlowFrame = nsPlaceholderFrame :: GetRealFrameForPlaceholder ( child ) ; VerifyStyleTree ( aPresContext , outOfFlowFrame , nullptr ); while ( outOfFlowFrame = outOfFlowFrame -> GetNextContinuation ( ) )  static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; VerifyContextParent ( aPresContext , aFrame , context , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); nsStyleContext * childStyleIfVisited = aContext -> GetStyleIfVisited ( ) ; if ( childStyleIfVisited && ! ( ( childStyleIfVisited -> RuleNode ( ) != aContext -> RuleNode ( ) && childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) ) || childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) -> GetStyleIfVisited ( ) ) )  DumpContext ( aFrame , aContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  nsAutoString name ; fputs ( NS_LossyConvertUTF16toASCII ( name ) . get ( ) , stdout ); 