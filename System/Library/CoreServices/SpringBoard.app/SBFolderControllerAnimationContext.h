/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen, SBWindow, UIView;

@interface SBFolderControllerAnimationContext : NSObject {

	UIScreen* _screen;
	SBWindow* _animationWindow;
	UIView* _fallbackIconContainer;

}

@property (nonatomic,readonly) UIScreen * screen;                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) SBWindow * animationWindow;                  //@synthesize animationWindow=_animationWindow - In the implementation block
@property (nonatomic,readonly) UIView * fallbackIconContainer;              //@synthesize fallbackIconContainer=_fallbackIconContainer - In the implementation block
+(id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
-(id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
-(SBWindow *)animationWindow;
-(UIView *)fallbackIconContainer;
-(UIScreen *)screen;
@end

