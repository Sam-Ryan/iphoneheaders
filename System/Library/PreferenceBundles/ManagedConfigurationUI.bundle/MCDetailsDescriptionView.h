/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {

	NSArray* _information;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGSize* _sizes;
	unsigned long long _sizesCount;
	double _idealHeight;
	BOOL _usesDynamicAlignment;
	double _labelMaxWidth;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)_labelFont;
-(double)heightForTableView;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)_valueFont;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
-(void)setUsesDynamicAlignment:(BOOL)arg1 ;
@end

