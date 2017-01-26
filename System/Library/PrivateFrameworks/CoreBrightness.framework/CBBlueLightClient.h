/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject {

	BrightnessSystemClient* bsc;
	/*^block*/id clientBlock;
	BOOL ownsClient;
	BOOL notificationActive;
	BOOL rangeSet;
	SCD_Struct_CB10 defaultCctRange;
	BOOL rangeOverridden;
	SCD_Struct_CB10 cctRange;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsBlueLightReduction;
-(void)dealloc;
-(id)init;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)setActive:(BOOL)arg1 ;
-(BOOL)setMode:(int)arg1 ;
-(void)enableNotifications;
-(void)disableNotifications;
-(id)initWithClientObj:(id)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 withOption:(int)arg2 ;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni9*)arg2 ;
-(void)suspendNotifications:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)getDefaultCCTRange:(SCD_Struct_CB10*)arg1 ;
-(BOOL)getCCTRange:(SCD_Struct_CB10*)arg1 ;
-(BOOL)setCCT:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)setCCTRange:(SCD_Struct_CB10*)arg1 ;
-(void)setStatusNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)getBlueLightStatus:(SCD_Struct_Ni9*)arg1 ;
-(void)suspendNotifications:(BOOL)arg1 ;
-(BOOL)setSchedule:(const SCD_Struct_Ni6*)arg1 ;
-(BOOL)getStrength:(float*)arg1 ;
-(BOOL)setStrength:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)getCCT:(float*)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)supported;
@end
