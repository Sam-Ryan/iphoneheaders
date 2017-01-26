/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxy.h>

@class NSXPCConnection, NSMutableArray;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)openConnection;
-(void)closeConnection;
-(void)_connectToDaemonIfNeeded;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1 ;
-(void)fetchDevicePushToken:(/*^block*/id)arg1 ;
-(void)fetchProblemStatus;
-(void)resetShownAnnouncements;
-(void)simulateProblemResolution;
-(void)clearCurrentAnnouncement;
-(void)simulateAnnouncement:(id)arg1 ;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)clearBulletinWithRecordID:(id)arg1 ;
-(void)registerForTopic;
-(void)checkin;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)clearTrafficConditionsBulletin;
@end

