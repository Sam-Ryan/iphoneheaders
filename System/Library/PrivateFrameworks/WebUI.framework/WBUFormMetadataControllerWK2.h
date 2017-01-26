/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>
#import <libobjc.A.dylib/WKWebProcessPlugInFormDelegatePrivate.h>

@protocol WBUFormMetadataObserver;
@class WKWebProcessPlugInScriptWorld, WBUWebProcessPlugInPageController, NSDictionary, WKWebProcessPlugInFrame, NSString;

@interface WBUFormMetadataControllerWK2 : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate> {

	WKWebProcessPlugInScriptWorld* _scriptWorld;
	WBUWebProcessPlugInPageController* _pageController;
	id<WBUFormMetadataObserver> _observer;
	NSDictionary* _assistedNodeMetadata;
	BOOL _shouldListenForFormChanges;
	NSDictionary* _unsubmittedForm;
	WKWebProcessPlugInFrame* _unsubmittedFormFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInScriptWorld * scriptWorld; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(BOOL)arg4 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 didAssociateFormControls:(id)arg2 ;
-(BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 ;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 ;
-(void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 ;
-(void)clearField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)shouldIncludeUnannotatedControls;
-(WKWebProcessPlugInScriptWorld *)scriptWorld;
-(id)_observer;
-(BOOL)_willNavigateFrameWithUnsubmittedForm:(id)arg1 loadingWillBeDeferred:(BOOL)arg2 ;
-(void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3 ;
-(void)collectFormMetadataForPreFilling;
-(void)collectURLsForPreFilling;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 replyIdentifier:(id)arg3 ;
-(BOOL)didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
@end

