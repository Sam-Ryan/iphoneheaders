/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton;

@interface PKCameraCaptureInstructionView : UIView {

	PKTableHeaderView* _headerView;
	long long _context;
	UIButton* _manualEntryButton;
	UIButton* _setupLaterButton;

}

@property (nonatomic,retain) UIButton * manualEntryButton;              //@synthesize manualEntryButton=_manualEntryButton - In the implementation block
@property (nonatomic,retain) UIButton * setupLaterButton;               //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)isBuddyiPad;
-(UIButton *)setupLaterButton;
-(void)setManualEntryButton:(UIButton *)arg1 ;
-(void)setSetupLaterButton:(UIButton *)arg1 ;
-(UIButton *)manualEntryButton;
@end
