/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/AAUICDPRemoteSecretChallengeHandler.h>

@class NSArray, CDPRemoteDeviceSecretValidator, NSString;

@interface AAUICDPDeviceListViewController : UITableViewController <AAUICDPRemoteSecretChallengeHandler> {

	NSArray* _devices;
	CDPRemoteDeviceSecretValidator* _validator;
	BOOL _shouldShowCancelButton;
	/*^block*/id _challengeResponseHandler;

}

@property (nonatomic,copy) id challengeResponseHandler;                //@synthesize challengeResponseHandler=_challengeResponseHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCancelButton;              //@synthesize shouldShowCancelButton=_shouldShowCancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(BOOL)shouldShowCancelButton;
-(id)initWithDevices:(id)arg1 validator:(id)arg2 ;
-(id)challengeResponseHandler;
-(void)setChallengeResponseHandler:(id)arg1 ;
-(void)setShouldShowCancelButton:(BOOL)arg1 ;
-(void)_pushApproveFromAnotherDeviceViewController;
@end

