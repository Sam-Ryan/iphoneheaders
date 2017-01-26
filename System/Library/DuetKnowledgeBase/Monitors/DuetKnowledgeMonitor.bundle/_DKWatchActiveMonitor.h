/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/IDSServiceDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface _DKWatchActiveMonitor : _DKMonitor <IDSServiceDelegatePrivate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> idsServiceQueue;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)_eventWithWatchActive:(BOOL)arg1 deviceID:(id)arg2 ;
-(void)checkDevices:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
@end

