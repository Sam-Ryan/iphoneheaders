/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMStepCounterProxy;

@interface CMStepCounter : NSObject {

	CMStepCounterProxy* _stepcounterProxy;

}

@property (assign) BOOL enabled; 
@property (nonatomic,readonly) CMStepCounterProxy * stepcounterProxy;              //@synthesize stepcounterProxy=_stepcounterProxy - In the implementation block
+(BOOL)isStepCountingAvailable;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(CMStepCounterProxy *)stepcounterProxy;
-(void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopStepCountingUpdates;
-(void)getTotalCountToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)deleteHistory;
@end

