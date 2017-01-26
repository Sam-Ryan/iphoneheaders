/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFormatter;

@interface TSKRulerUnits : NSObject {

	int _rulerUnits;
	BOOL _showRulerAsPercentage;
	BOOL _centerRulerOrigin;
	int _preferredPixelUnit;
	NSFormatter* _formatter;
	NSFormatter* _lenientFormatter;
	NSFormatter* _highPrecisionFormatter;
	NSFormatter* _lenientHighPrecisionFormatter;

}

@property (assign,nonatomic) int rulerUnits;                          //@synthesize rulerUnits=_rulerUnits - In the implementation block
@property (assign,nonatomic) BOOL showRulerAsPercentage;              //@synthesize showRulerAsPercentage=_showRulerAsPercentage - In the implementation block
@property (assign,nonatomic) BOOL centerRulerOrigin;                  //@synthesize centerRulerOrigin=_centerRulerOrigin - In the implementation block
@property (assign,nonatomic) int preferredPixelUnit;                  //@synthesize preferredPixelUnit=_preferredPixelUnit - In the implementation block
+(id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(BOOL)arg3 lenient:(BOOL)arg4 ;
+(id)instance;
-(void)setRulerUnits:(int)arg1 ;
-(void)setShowRulerAsPercentage:(BOOL)arg1 ;
-(void)setCenterRulerOrigin:(BOOL)arg1 ;
-(double)convertRulerUnitsToPoints:(double)arg1 ;
-(double)convertPointsToRulerUnits:(double)arg1 ;
-(id)formatter:(BOOL)arg1 lenient:(BOOL)arg2 ;
-(id)compatibleRulerUnits;
-(id)localizedCompatibleRulerUnits;
-(int)rulerUnits;
-(BOOL)showRulerAsPercentage;
-(BOOL)centerRulerOrigin;
-(int)preferredPixelUnit;
-(void)setPreferredPixelUnit:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

