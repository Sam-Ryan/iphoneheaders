/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface PSUsageSizeHeader : UIView <PSHeaderFooterView> {

	UILabel* _sizeLabel;
	UILabel* _titleLabel;
	double _height;

}
-(void)layoutSubviews;
-(void)setSize:(id)arg1 ;
-(void)setSizeLabelHidden:(BOOL)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
