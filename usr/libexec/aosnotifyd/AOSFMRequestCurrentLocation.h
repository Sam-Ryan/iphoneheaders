/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class CLLocation, NSDictionary;

@interface AOSFMRequestCurrentLocation : AOSFMRequest {

	BOOL _finalLocation;
	CLLocation* _location;
	NSDictionary* _locateCommand;
	long long _publishReason;
	double _accuracyChange;

}

@property (nonatomic,retain) CLLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL finalLocation;                        //@synthesize finalLocation=_finalLocation - In the implementation block
@property (nonatomic,retain) NSDictionary * locateCommand;              //@synthesize locateCommand=_locateCommand - In the implementation block
@property (assign,nonatomic) long long publishReason;                   //@synthesize publishReason=_publishReason - In the implementation block
@property (assign,nonatomic) double accuracyChange;                     //@synthesize accuracyChange=_accuracyChange - In the implementation block
+(id)serializedFormOfLocation:(id)arg1 ;
-(id)initWithProvider:(id)arg1 location:(id)arg2 finalLocation:(BOOL)arg3 locateCommand:(id)arg4 reason:(long long)arg5 accuracyChange:(double)arg6 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(long long)maxNonNetworkRelatedRetries;
-(long long)maxConsecutiveNetworkNotificationRetries;
-(BOOL)canRequestBeRetriedNow;
-(long long)maxTimerBasedNetworkRetries;
-(void)setLocateCommand:(NSDictionary *)arg1 ;
-(NSDictionary *)locateCommand;
-(void)setPublishReason:(long long)arg1 ;
-(void)setAccuracyChange:(double)arg1 ;
-(long long)publishReason;
-(double)accuracyChange;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setFinalLocation:(BOOL)arg1 ;
-(BOOL)finalLocation;
-(id)requestBody;
@end
