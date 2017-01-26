/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXActionHandlerDelegate;
@class UIAlertController, UIAlertAction, SXAction, UIViewController;

@interface SXActionHandler : NSObject {

	UIAlertController* _alertController;
	UIAlertAction* _cancelAction;
	SXAction* _action;
	id<SXActionHandlerDelegate> _delegate;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) SXAction * action;                                             //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<SXActionHandlerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                             //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,readonly) UIAlertAction * cancelAction;                                  //@synthesize cancelAction=_cancelAction - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(long long)alertControllerStyle;
-(void)executedAlertAction:(id)arg1 ;
-(id)alertActions;
-(void)handleActionOnViewController:(id)arg1 ;
-(id)setupAlertController;
-(void)setDelegate:(id<SXActionHandlerDelegate>)arg1 ;
-(id<SXActionHandlerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(SXAction *)action;
-(id)title;
-(id)message;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertAction *)cancelAction;
-(UIAlertController *)alertController;
-(id)initWithAction:(id)arg1 ;
@end

