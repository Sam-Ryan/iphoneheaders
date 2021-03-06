/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>

@class CKGradientReferenceView;

@interface CKSendAnimationWindow : UIAutoRotatingWindow {

	CKGradientReferenceView* _gradientReferenceView;

}

@property (nonatomic,retain) CKGradientReferenceView * gradientReferenceView;              //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_canAffectStatusBarAppearance;
-(void)setGradientReferenceView:(CKGradientReferenceView *)arg1 ;
-(CKGradientReferenceView *)gradientReferenceView;
@end

