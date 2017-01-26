/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenPasscodeSettings : _UISettings {

	int _scrollBehavior;
	double _fixedHysteresis;
	double _percentOfNextButtonIncluded;

}

@property (assign,nonatomic) int scrollBehavior;                              //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
@property (assign,nonatomic) double fixedHysteresis;                          //@synthesize fixedHysteresis=_fixedHysteresis - In the implementation block
@property (assign,nonatomic) double percentOfNextButtonIncluded;              //@synthesize percentOfNextButtonIncluded=_percentOfNextButtonIncluded - In the implementation block
+(id)settingsControllerModule;
-(double)fixedHysteresis;
-(double)percentOfNextButtonIncluded;
-(void)setPercentOfNextButtonIncluded:(double)arg1 ;
-(void)setFixedHysteresis:(double)arg1 ;
-(void)setDefaultValues;
-(int)scrollBehavior;
-(void)setScrollBehavior:(int)arg1 ;
@end

