/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/AAUIFamilySetupPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSString;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <AAUIFamilySetupPageDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithGrandSlamSigner:(id)arg1 familyEligibilityResponse:(id)arg2 ;
-(void)familySetupPage:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)_showActivitySpinnerInNavigationBar;
-(void)_hideActivitySpinnerInNavigationBar;
-(id)_initWithGrandSlamSigner:(id)arg1 rootViewController:(id)arg2 ;
-(id)_createCloseButton;
-(BOOL)_isRunningInSettings;
-(id)_urlForLaunchingSettings;
-(void)_loadRemoteUIPages;
-(void)_closeButtonWasTapped:(id)arg1 ;
-(void)_sendUserToiTunesSettings;
-(void)_remoteUIDidCancel;
-(id)initTrimmedFlowWithGrandSlamSigner:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
@end

