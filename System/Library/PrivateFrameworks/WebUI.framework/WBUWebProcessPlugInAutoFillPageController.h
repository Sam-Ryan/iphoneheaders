/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUWebProcessPlugInPageController.h>
#import <libobjc.A.dylib/WBUFormAutoFiller.h>
#import <libobjc.A.dylib/WBUInjectedJavaScriptWebProcessController.h>

@protocol WBUInjectedJavaScriptObserver;
@class _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, WBUFormMetadataControllerWK2, NSString;

@interface WBUWebProcessPlugInAutoFillPageController : WBUWebProcessPlugInPageController <WBUFormAutoFiller, WBUInjectedJavaScriptWebProcessController> {

	_WKRemoteObjectInterface* _activityControllerInterface;
	id<WBUInjectedJavaScriptObserver> _activityJSObserverProxy;
	_WKRemoteObjectInterface* _autoFillerInterface;
	WKWebProcessPlugInScriptWorld* _isolatedWorld;
	WBUFormMetadataControllerWK2* _formMetadataController;
	unsigned long long _loadDeferringReasons;

}

@property (nonatomic,retain) WBUFormMetadataControllerWK2 * formMetadataController;              //@synthesize formMetadataController=_formMetadataController - In the implementation block
@property (nonatomic,readonly) unsigned long long loadDeferringReasons;                          //@synthesize loadDeferringReasons=_loadDeferringReasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 ;
-(void)annotateForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2 ;
-(WBUFormMetadataControllerWK2 *)formMetadataController;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4 ;
-(void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)collectURLsForPrefillingAtURL:(id)arg1 ;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg1 ;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 replyIdentifier:(id)arg4 ;
-(void)clearAutoFillMetadata;
-(void)resumeLoadingAfterSavingFormData;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 replyIdentifier:(id)arg5 ;
-(id)activieJSObserverProxy;
-(void)setFormMetadataController:(WBUFormMetadataControllerWK2 *)arg1 ;
-(unsigned long long)loadDeferringReasons;
-(void)addLoadDeferringReasons:(unsigned long long)arg1 ;
-(void)removeLoadDeferringReasons:(unsigned long long)arg1 ;
@end

