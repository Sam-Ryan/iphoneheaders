/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFVariableLayoutConstraint : NSObject {

	BOOL _cachedInterpolatedValueIsValid;
	double _cachedInterpolatedValue;
	double _medianValue;
	/*^block*/id _interpolationFormula;

}

@property (assign,nonatomic) double medianValue;                   //@synthesize medianValue=_medianValue - In the implementation block
@property (assign,nonatomic) id interpolationFormula;              //@synthesize interpolationFormula=_interpolationFormula - In the implementation block
+(id)medianContentSizeCategory;
+(long long)_medianContentSizeIndex;
-(void)dealloc;
-(void)setMedianValue:(double)arg1 ;
-(void)setInterpolationFormula:(id)arg1 ;
-(void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1 ;
-(double)medianValue;
-(id)interpolationFormula;
-(id)initWithMedianConstraintValue:(double)arg1 interpolationFormula:(/*^block*/id)arg2 ;
-(double)interpolatedValue;
@end

