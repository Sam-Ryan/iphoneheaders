/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFSlowMotionTimeRangeMapperScaledRegion : NSObject {

	float _rate;
	float _rampInStartTime;
	float _rampInEndTime;
	float _rampOutStartTime;
	float _rampOutEndTime;

}

@property (assign,nonatomic) float rate;                          //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float rampInStartTime;               //@synthesize rampInStartTime=_rampInStartTime - In the implementation block
@property (assign,nonatomic) float rampInEndTime;                 //@synthesize rampInEndTime=_rampInEndTime - In the implementation block
@property (assign,nonatomic) float rampOutStartTime;              //@synthesize rampOutStartTime=_rampOutStartTime - In the implementation block
@property (assign,nonatomic) float rampOutEndTime;                //@synthesize rampOutEndTime=_rampOutEndTime - In the implementation block
-(float)rampInStartTime;
-(void)setRampInStartTime:(float)arg1 ;
-(float)rampInEndTime;
-(void)setRampInEndTime:(float)arg1 ;
-(float)rampOutStartTime;
-(void)setRampOutStartTime:(float)arg1 ;
-(float)rampOutEndTime;
-(void)setRampOutEndTime:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

