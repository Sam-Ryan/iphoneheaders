/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface MKTransitPageControlCell : MKCustomSeparatorTableViewCell {

	UILabel* _prompt;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (assign,nonatomic) double labelMargin; 
@property (nonatomic,copy) NSString * promptText; 
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(double)labelMargin;
-(void)setPromptText:(NSString *)arg1 ;
-(void)setLabelMargin:(double)arg1 ;
-(NSString *)promptText;
@end

