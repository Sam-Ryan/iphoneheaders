/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCCSettingModule.h>

@class CBBlueLightClient;

@interface SBCCNightShiftSetting : SBCCSettingModule {

	CBBlueLightClient* _blueLightReductionClient;
	SCD_Struct_SB39 _currentStatus;

}
+(BOOL)isSupported:(int)arg1 ;
+(BOOL)_isSupported;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(id)_statusUpdateForBlueLightStatus:(SCD_Struct_SB40)arg1 ;
-(void)_getBlueLightStatus:(/*^block*/id)arg1 ;
-(void)_setNightShiftEnabled:(BOOL)arg1 ;
-(id)_alertControllerForDisablingAccessibilityScreenFilter:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(id)_statusUpdateForBlueLightStatus:(SCD_Struct_SB40)arg1 forLocale:(id)arg2 ;
-(id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_SB37)arg2 ;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_SB37)arg1 ;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_SB37)arg1 forLocale:(id)arg2 ;
-(id)_timeFormatterForLocale:(id)arg1 ;
-(id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_SB37)arg2 forLocale:(id)arg3 ;
-(id)_formatCardinalityForTransitionTime:(SCD_Struct_SB37)arg1 forLocale:(id)arg2 ;
-(BOOL)_uses24HourTimeForLocale:(id)arg1 ;
-(id)statusUpdate;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(BOOL)isRestricted;
@end

