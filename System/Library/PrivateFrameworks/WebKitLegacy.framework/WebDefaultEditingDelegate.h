/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebDefaultEditingDelegate : NSObject
+(id)sharedEditingDelegate;
-(BOOL)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4 ;
-(BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5 ;
-(BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3 ;
-(BOOL)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3 ;
-(BOOL)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3 ;
-(BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(void)webViewDidBeginEditing:(id)arg1 ;
-(void)webViewDidEndEditing:(id)arg1 ;
-(void)webViewDidChangeTypingStyle:(id)arg1 ;
-(void)webViewDidChangeSelection:(id)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4 ;
@end

