/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject {

	NSLengthFormatter* _heightFormatter;
	NSNumber* _usesImperialUnits;

}

@property (nonatomic,readonly) BOOL usesImperialUnits; 
+(id)sharedFormatter;
-(void)dealloc;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(id)localizedStringFromHeightInCentimeters:(id)arg1 ;
-(BOOL)usesImperialUnits;
-(void)getFeet:(double*)arg1 inches:(double*)arg2 fromCentimeters:(double)arg3 ;
-(id)formattedValueForFeet:(double)arg1 ;
-(id)formattedValueForInches:(double)arg1 ;
-(id)formattedValueForCentimeters:(double)arg1 ;
-(double)centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
@end

