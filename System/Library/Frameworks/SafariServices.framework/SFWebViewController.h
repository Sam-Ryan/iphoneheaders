/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WBUFormAutoFillControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/_WKFormDelegate.h>
#import <libobjc.A.dylib/_SFJavaScriptDialogControllerDelegate.h>

@protocol SFWebViewControllerDelegate;
@class WBUFormAutoFillController, _SFJavaScriptDialogController, WKWebView, NSString;

@interface SFWebViewController : UIViewController <WBUFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _WKFormDelegate, _SFJavaScriptDialogControllerDelegate> {

	WBUFormAutoFillController* _autoFillController;
	BOOL _didFirstLayout;
	BOOL _didFinishDocumentLoad;
	_SFJavaScriptDialogController* _javaScriptDialogController;
	BOOL _shouldSuppressJavaScriptDialogs;
	BOOL _loading;
	BOOL _didFirstVisuallyNonEmptyLayout;
	id<SFWebViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) WKWebView * webView; 
@property (assign,nonatomic,__weak) id<SFWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) BOOL didFirstVisuallyNonEmptyLayout;                        //@synthesize didFirstVisuallyNonEmptyLayout=_didFirstVisuallyNonEmptyLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processPool;
-(void)setDelegate:(id<SFWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SFWebViewControllerDelegate>)delegate;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(WKWebView *)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)didFirstVisuallyNonEmptyLayout;
-(BOOL)isLoading;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2 ;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)_webViewWebProcessDidBecomeResponsive:(id)arg1 ;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2 ;
-(id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3 ;
-(void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2 ;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2 ;
-(void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(id)webViewConfiguration;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)willActivateWebViewController;
-(id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 isPreviewing:(BOOL)arg3 ;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1 ;
-(BOOL)formAutoFillControllerShouldDisableAutoFill:(id)arg1 ;
-(BOOL)dialogControllerShouldSuppressDialogs:(id)arg1 ;
-(void)willBeginUserInitiatedNavigation;
@end

