/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTCReporting, NSObject, NSArray;

@interface RTCReportingAgent : NSObject {

	RTCReporting* _reportingObject;
	int _client;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSArray* _backends;

}

@property (retain) RTCReporting * reportingObject;                           //@synthesize reportingObject=_reportingObject - In the implementation block
@property (assign) int client;                                               //@synthesize client=_client - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> reportingQueue;              //@synthesize reportingQueue=_reportingQueue - In the implementation block
@property (copy) NSArray * backends;                                         //@synthesize backends=_backends - In the implementation block
-(void)dealloc;
-(void)setClient:(int)arg1 ;
-(id)initWithCallID:(unsigned)arg1 clientType:(int)arg2 ;
-(void)releaseReportingObject;
-(RTCReporting *)reportingObject;
-(void)setReportingObject:(RTCReporting *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportingQueue;
-(void)setReportingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)backends;
-(void)setBackends:(NSArray *)arg1 ;
-(int)client;
@end

