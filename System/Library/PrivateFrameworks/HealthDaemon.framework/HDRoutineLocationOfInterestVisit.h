/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface HDRoutineLocationOfInterestVisit : NSObject {

	NSDate* _entryTime;
	NSDate* _exitTime;

}

@property (nonatomic,retain) NSDate * entryTime;              //@synthesize entryTime=_entryTime - In the implementation block
@property (nonatomic,retain) NSDate * exitTime;               //@synthesize exitTime=_exitTime - In the implementation block
-(id)initWithCodable:(id)arg1 ;
-(NSDate *)entryTime;
-(void)setEntryTime:(NSDate *)arg1 ;
-(NSDate *)exitTime;
-(void)setExitTime:(NSDate *)arg1 ;
-(id)initWithLocationOfInterestVisit:(id)arg1 ;
@end

