/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerPreviewingDelegate_Private <NSObject>
@optional
-(id)committedViewControllerForPreviewViewController:(id)arg1;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtPosition:(CGPoint)arg2 inSourceView:(id)arg3;

@end

