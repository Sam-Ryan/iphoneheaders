/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/AAUIConfirmIdentityViewControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, AAFamilyInvite, RemoteUIController, NSOperationQueue, NSMutableURLRequest, NSString;

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	AAFamilyInvite* _invite;
	RemoteUIController* _remoteUIController;
	NSOperationQueue* _inviteOperationQueue;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;

}

@property (assign,nonatomic,__weak) id<AAUIFamilyInvitationAcceptanceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(id)_createCancelButton;
-(void)_sendUserToiTunesSettings;
-(void)_loadiTunesLinkingRemoteUI;
-(id)initWithInvite:(id)arg1 grandSlamSigner:(id)arg2 ;
-(void)_showErrorAlert;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
@end

