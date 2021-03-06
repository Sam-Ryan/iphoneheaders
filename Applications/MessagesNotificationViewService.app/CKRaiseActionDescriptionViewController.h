/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 11:31:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationsUI/NCContentViewController.h>

@class UILabel, UIImageView;

@interface CKRaiseActionDescriptionViewController : NCContentViewController {

	BOOL _raiseToTalk;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,getter=isRaiseToTalk,nonatomic) BOOL raiseToTalk;              //@synthesize raiseToTalk=_raiseToTalk - In the implementation block
+(BOOL)_isSecureForRemoteViewService;
-(void)_switchToRaiseToListen:(id)arg1 ;
-(void)_switchToPlaying:(id)arg1 ;
-(void)_switchToRaiseToTalk:(id)arg1 ;
-(void)_switchToRecording:(id)arg1 ;
-(void)_switchToRecorded:(id)arg1 ;
-(void)_switchToSent:(id)arg1 ;
-(BOOL)isRaiseToTalk;
-(void)setRaiseToTalk:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

