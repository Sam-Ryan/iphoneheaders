/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class CALayer, NSString;

@interface MCDButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	NSString* _labelTemplateString;

}

@property (nonatomic,copy) NSString * labelTemplateString;                 //@synthesize labelTemplateString=_labelTemplateString - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)focusedViewDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateButtonStyle;
-(BOOL)showBezelInTouch;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocusLayerSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayerSelected;
-(id)colorForTouchFocusLayer;
-(void)setLabelTemplateString:(NSString *)arg1 ;
-(void)setShowBezelInTouch:(BOOL)arg1 ;
-(id)_buttonBackGroundColorTouch;
-(NSString *)labelTemplateString;
@end
