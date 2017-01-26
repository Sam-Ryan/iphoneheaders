/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <AppleAccountSettings/AAUIPickInviteeDelegate.h>

@class ACAccount, ACAccountStore, SSAccount, AAGrandSlamSigner, NSOperationQueue, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSData, AAUIPickInviteeViewController, NSString;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate> {

	ACAccount* _appleAccount;
	ACAccountStore* _accountStore;
	SSAccount* _iTunesAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	NSOperationQueue* _networkingQueue;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	NSData* _pushToken;
	AAUIPickInviteeViewController* _pickInviteeVC;

}

@property (assign,nonatomic,__weak) id<AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * createChildAccountButtonTitle; 
@property (nonatomic,copy) NSString * createChildAccountInstructions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideActivitySpinnerInNavigationBar;
-(void)showActivitySpinnerInNavigationBar;
-(id)_itunesAccount;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)pickInviteeViewControllerWantsChildAccountFlow:(id)arg1 ;
-(void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(NSString *)createChildAccountButtonTitle;
-(void)setCreateChildAccountButtonTitle:(NSString *)arg1 ;
-(NSString *)createChildAccountInstructions;
-(void)setCreateChildAccountInstructions:(NSString *)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(id)_pushToken;
@end

