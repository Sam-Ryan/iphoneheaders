/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WBUFormAutoFillControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/_WKDownloadDelegate.h>
#import <libobjc.A.dylib/_WKFormDelegate.h>

@protocol WAWebViewControllerDelegate;
@class NSURL, WBUInjectedJavaScriptController, WBUWebClipMetadataFetcher, _WKDownload, NSString, WebUIAuthenticationManager, WBUSheetController, NSMutableArray, UIView, WBUFormAutoFillController, WKWebView;

@interface WAWebViewController : UIViewController <WBUFormAutoFillControllerDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, _WKDownloadDelegate, _WKFormDelegate> {

	NSURL* _originalURL;
	BOOL _didSetInitialStatusBarStyle;
	WBUInjectedJavaScriptController* _jsController;
	WBUWebClipMetadataFetcher* _webClipMetadataFetcher;
	_WKDownload* _currentDownload;
	NSString* _fileDownloadPath;
	WebUIAuthenticationManager* _authenticationManager;
	WBUSheetController* _sheetController;
	NSMutableArray* _alerts;
	UIView* _compatibilityStatusBarBackgroundView;
	WBUFormAutoFillController* _autoFillController;
	BOOL _didFirstLayout;
	BOOL _didFinishDocumentLoad;
	BOOL _preventRotation;
	id<WAWebViewControllerDelegate> _delegate;
	WKWebView* _webView;
	unsigned long long _statusBarStyle;

}

@property (assign,nonatomic,__weak) id<WAWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarStyle;                            //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL preventRotation;                                         //@synthesize preventRotation=_preventRotation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WAWebViewControllerDelegate>)arg1 ;
-(void)reload;
-(id<WAWebViewControllerDelegate>)delegate;
-(unsigned long long)statusBarStyle;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarStyle:(unsigned long long)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(WKWebView *)webView;
-(void)_downloadDidStart:(id)arg1 ;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3 ;
-(void)_downloadDidFinish:(id)arg1 ;
-(void)_download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_downloadDidCancel:(id)arg1 ;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2 ;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_webView:(id)arg1 decideDatabaseQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(/*^block*/id)arg7 ;
-(void)_webView:(id)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(/*^block*/id)arg5 ;
-(void)_webView:(id)arg1 printFrame:(id)arg2 ;
-(void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2 ;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(BOOL)_webView:(id)arg1 shouldRequestGeolocationAuthorizationForURL:(id)arg2 isMainFrame:(BOOL)arg3 mainFrameURL:(id)arg4 ;
-(void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1 ;
-(BOOL)formAutoFillControllerShouldDisableAutoFill:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(void)sheetControllerDidShowSheet:(id)arg1 ;
-(void)sheetControllerDidHideSheet:(id)arg1 ;
-(void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3 ;
-(id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2 ;
-(void)_cleanupDownload;
-(void)_updateCompatibilityStatusBarView;
-(BOOL)_possiblyMobileConfigURL:(id)arg1 ;
-(void)_addAlert:(id)arg1 ;
-(void)_showProfileInstallFailedAlert;
-(void)loadWebApplicationFromURL:(id)arg1 ;
-(void)fetchWebApplicationMetadataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)preventRotation;
-(void)setPreventRotation:(BOOL)arg1 ;
@end

