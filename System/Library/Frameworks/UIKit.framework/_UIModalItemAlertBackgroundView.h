/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemBackgroundView.h>

@class _UIBackdropView, UIImageView;

@interface _UIModalItemAlertBackgroundView : _UIModalItemBackgroundView {

	_UIBackdropView* _effectView;
	UIImageView* _fillingView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_gradientImageForBoundsSize:(CGSize)arg1 withInnerColor:(id)arg2 outerColor:(id)arg3 ;
@end
