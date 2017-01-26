/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {

	IMAccount* _account;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)_startListeningForNotifications;
-(id)initWithAccount:(id)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(id)statusForAlias:(id)arg1 ;
-(BOOL)isConnectedToDaemon;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)specifierForAlias:(id)arg1 ;
-(id)accountLoginStatus:(id)arg1 ;
-(id)registrationStatus:(id)arg1 ;
-(id)accountLogin:(id)arg1 ;
-(id)accountType:(id)arg1 ;
-(id)accountDisplayName:(id)arg1 ;
-(id)registrationFailureReason:(id)arg1 ;
-(id)accountIsActive:(id)arg1 ;
-(id)specifiers;
@end

