static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  nsIFrame * outOfFlowFrame = nsPlaceholderFrame :: GetRealFrameForPlaceholder ( child ) ; VerifyStyleTree ( aPresContext , outOfFlowFrame , nullptr ); while ( outOfFlowFrame = outOfFlowFrame -> GetNextContinuation ( ) )  static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  nsIFrame * outOfFlowFrame = nsPlaceholderFrame :: GetRealFrameForPlaceholder ( child ) ; VerifyStyleTree ( aPresContext , outOfFlowFrame , nullptr ); while ( outOfFlowFrame = outOfFlowFrame -> GetNextContinuation ( ) )  static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; int32_t contextIndex = 0 ; for (nsStyleContext* (extraContext = ++contextIndex) VerifyContextParent ( aPresContext , aFrame , extraContext , context ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); nsStyleContext * childStyleIfVisited = aContext -> GetStyleIfVisited ( ) ; if ( childStyleIfVisited && ! ( ( childStyleIfVisited -> RuleNode ( ) != aContext -> RuleNode ( ) && childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) ) || childStyleIfVisited -> GetParent ( ) == aContext -> GetParent ( ) -> GetStyleIfVisited ( ) ) )  fputs ( "\n" , stdout ); 