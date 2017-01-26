/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessRadioManagerd/WCM_RadioController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface WRM_iRATClientController : WCM_RadioController {

	BOOL m_active;
	NSObject*<OS_dispatch_queue> mQueue;
	NSMutableArray* mHandoverContexts;

}
-(void)handleLinkPrefSubscribe:(id)arg1 ;
-(void)removeAllMobilityContextsFromList;
-(void)addMobilityContextToList:(id)arg1 ;
-(int)getMyClientType;
-(id)getHandoverContexts;
-(void)handleLinkPreferenceNotificationCM:(BOOL)arg1 ;
-(void)existingContexts;
-(id)getMobilityContextFromList:(unsigned long long)arg1 ;
-(void)handleLinkPreferenceNotificationIDS:(BOOL)arg1 ;
-(void)handleLinkPrefSubscribeIDS:(id)arg1 ;
-(void)handleLinkPrefSubscribeCM:(id)arg1 ;
-(void)handleSubscribeStatusUpdate:(id)arg1 ;
-(void)handleSubscribeStatusUpdateIDS:(id)arg1 ;
-(void)handleSubscribeStatusUpdateCM:(id)arg1 ;
-(void)handleMetricsReportIDS:(id)arg1 ;
-(void)removeMobilityContextFromList:(id)arg1 ;
-(id)getStaleContextFromList;
-(void)purgeStaleMobilityContexts;
-(void)deactivateMobilityContexts;
-(void)deleteMobilityContext:(unsigned long long)arg1 ;
-(void)handleLinkPreferenceNotification:(BOOL)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)getState;
@end

