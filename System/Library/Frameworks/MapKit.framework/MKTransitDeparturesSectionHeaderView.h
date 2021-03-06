/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UILabel, NSLayoutConstraint, MKButtonWithTargetArgument, NSString;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {

	unsigned long long _type;
	UILabel* _label;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(double)defaultHeight;
+(id)_font:(unsigned long long)arg1 ;
+(id)_buttonFont:(unsigned long long)arg1 ;
-(MKButtonWithTargetArgument *)button;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end

