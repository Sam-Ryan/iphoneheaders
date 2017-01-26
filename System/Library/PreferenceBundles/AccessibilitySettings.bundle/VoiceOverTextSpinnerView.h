/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UIActivityIndicatorView;

@interface VoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {

	UILabel* _text;
	UIActivityIndicatorView* _spinner;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)showSpinner;
-(void)hideSpinner;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

