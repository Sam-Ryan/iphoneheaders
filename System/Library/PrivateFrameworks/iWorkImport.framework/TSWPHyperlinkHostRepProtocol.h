/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:43:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPHyperlinkHostRepProtocol <NSObject>
@optional
-(BOOL)shouldUseHyperlinkHighlight;
-(id)hyperlinkFieldForEditingHyperlinkField:(id)arg1;
-(void)didDismissEditHyperlinkUIForHyperlinkField:(id)arg1;
-(BOOL)shouldDismissHyperlinkUIOnApplicationEnterBackground;

@required
-(void)setHighlightedHyperlinkField:(id)arg1;
-(CGRect*)naturalBoundsRectForHyperlinkField:(id)arg1;
-(id)smartFieldAtPoint:(CGPoint)arg1;
-(void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(BOOL)arg2;
-(id)hyperlinkContainerRep;

@end

