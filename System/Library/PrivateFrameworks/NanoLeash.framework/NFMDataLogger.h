/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface NFMDataLogger : NSObject {

	BOOL _recordingTelemetry;
	NSOperationQueue* _activityQueue;
	NSOperationQueue* _accelerationQueue;

}

@property (assign,nonatomic) BOOL recordingTelemetry;                           //@synthesize recordingTelemetry=_recordingTelemetry - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityQueue;                  //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accelerationQueue;              //@synthesize accelerationQueue=_accelerationQueue - In the implementation block
+(id)sharedLogger;
-(void)setActivityQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)activityQueue;
-(void)beginRecordingTelemetry;
-(void)endRecordingTelemetry;
-(void)recordRSSIStrength:(float)arg1 ;
-(void)recordRequestedUserResponse;
-(void)recordUserResponse:(long long)arg1 ;
-(void)recordLeashed;
-(void)recordLeashBroke;
-(BOOL)recordingTelemetry;
-(void)setRecordingTelemetry:(BOOL)arg1 ;
-(NSOperationQueue *)accelerationQueue;
-(void)setAccelerationQueue:(NSOperationQueue *)arg1 ;
@end

