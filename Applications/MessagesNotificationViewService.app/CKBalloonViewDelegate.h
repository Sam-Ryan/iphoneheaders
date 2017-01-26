/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 11:31:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBalloonViewDelegate <NSObject>
@required
-(BOOL)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
-(void)balloonViewWillResignFirstResponder:(id)arg1;
-(void)balloonViewTapped:(id)arg1;
-(BOOL)shouldShowMenuForBalloonView:(id)arg1;
-(id)menuItemsForBalloonView:(id)arg1;
-(CGRect*)calloutTargetRectForBalloonView:(id)arg1;
-(void)balloonView:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;

@end

