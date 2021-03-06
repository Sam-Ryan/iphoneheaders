/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKCategorySample;

@interface HDCoachingDiagnosticData : NSObject {

	NSArray* _items;
	HKCategorySample* _coachingEventSample;

}

@property (nonatomic,readonly) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HKCategorySample * coachingEventSample;              //@synthesize coachingEventSample=_coachingEventSample - In the implementation block
-(id)init;
-(NSArray *)items;
-(id)itemForInterval:(unsigned long long)arg1 future:(BOOL)arg2 ;
-(HKCategorySample *)coachingEventSample;
-(void)setCoachingEventSample:(HKCategorySample *)arg1 ;
@end

