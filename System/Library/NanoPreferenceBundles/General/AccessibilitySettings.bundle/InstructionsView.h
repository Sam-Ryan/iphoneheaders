/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UILabel, NSMutableArray;

@interface InstructionsView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	CGSize _totalSize;
	UILabel* _headerLabel;
	NSMutableArray* _contentLabels;
	double _backgroundInset;
	double backgroundInset;

}

@property (assign,nonatomic) double backgroundInset; 
-(void)_initializeContent;
-(void)setBackgroundInset:(double)arg1 ;
-(double)backgroundInset;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

